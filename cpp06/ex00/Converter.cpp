#include "Converter.hpp"  
	
Converter::Converter()
{
	this->rawData = "";
	this->data = 0;
	this->dataType = UNKNOWN;
}

Converter::Converter(Converter & src): rawData(src.rawData), data(src.data), dataType(src.dataType)
{

}

Converter::Converter(std::string rawData)
{
	char* e;

	this->rawData = rawData;
	this->dataType = getDataType(rawData);
	if (this->dataType == CHAR)
		this->data = static_cast<double>(rawData.at(0)); // cast vers double pour eviter les erreurs de type
	errno = 0;
	this->data = (this->dataType == UNKNOWN) ? 0 : std::strtod(rawData.c_str(), &e); // conversion string vers double
	if (errno || *e)
		this->dataType = UNKNOWN;
}

Converter::~Converter()
{
	
}

Converter & Converter::operator=(const Converter & rhs)
{
	this->rawData = rhs.rawData;
	this->dataType = rhs.dataType;
	this->data = rhs.data;
	return *this;
}

const int & Converter::getDataType() const
{
	return this->dataType;
}

const std::string & Converter::getRawData() const
{
	return this->rawData;
}

std::string Converter::toChar() const
{
	char c;
	std::string s;

	if (this->dataType == CHAR)
		return rawData;
	c = static_cast<char>(this->data); // cast vers char 
	if (this->dataType == NAN || this->dataType == UNKNOWN
		|| this->dataType == INFINITY || this->dataType == MINFINITY || this->data != c)
		return "Impossible";
	if (!std::isprint(c))
		return "Non displayable";
	s = "'";
	s.push_back(c);
	s += "'";
	return s;
}

std::string Converter::toInt() const
{
	int i;

	if (this->data > INT_MAX || this->data < INT_MIN)
		return "Impossible";
	i = static_cast<int>(this->data); // cast vers int
	if (this->dataType == NAN || this->dataType == UNKNOWN
		|| this->dataType == INFINITY || this->dataType == MINFINITY || this->data != i)
		return "Impossible";
	return intToString(i);
}

std::string Converter::toFloat() const
{
	float f;

	if (this->dataType == FLOAT)
		return this->rawData;
	if (this->data > FLT_MAX || this->data < -FLT_MAX)
		return "Impossible";
	f = static_cast<float>(this->data); // cast vers float
	if (this->dataType == NAN)
		return "nanf";
	if (this->dataType == INFINITY)
		return "inff";
	if (this->dataType == MINFINITY)
		return "-inff";
	return floatToString(f);
}

std::string Converter::toDouble() const
{
	if (this->dataType == DOUBLE)
		return this->rawData;
	if (this->dataType == NAN)
		return "nan";
	if (this->dataType == INFINITY)
		return "inf";
	if (this->dataType == MINFINITY)
		return "-inf";
	return doubleToString(this->data);
}

std::string Converter::intToString(int & i) const
{
	std::ostringstream oss;

	oss << i;
	return oss.str();
}

std::string Converter::floatToString(float & f) const
{
	std::ostringstream oss;
	std::string s;

	oss << f;
	s = oss.str();
	if (isInt(s))
		s += ".0";
	s += "f";
	return s;
}

std::string Converter::doubleToString(double d) const
{
	std::ostringstream oss;
	std::string s;

	oss << d;
	s = oss.str();
	if (isInt(s))
		s += ".0";
	return s;
}

bool Converter::isNumeric(std::string & s) const
{
	std::string::iterator it;

	for (it = s.begin(); it != s.end(); ++it)
		if (!std::isdigit(*it))
			return false;
	return true;
}

bool Converter::isInt(std::string & s) const
{
	if (s.empty())
		return false;
	if (s.find('.', 0) != std::string::npos && !isNumeric(s))
		return false;
	return true;
}

int Converter::getDataType(std::string & data) const
{
	size_t i;
	int n_dot;

	n_dot = 0;
	if (data.empty())
		return UNKNOWN;
	if (data == "-inf" || data == "-inff")
		return MINFINITY;
	if (data == "inf" || data == "inff")
		return INFINITY;
	if (!isdigit(data.at(0)) && data.size() == 1)
		return CHAR;
	if (data.at(0) == '-' || isdigit(data.at(0)))
	{
		i = 1;
		while (isdigit(data[i]) && i < data.size())
			i++;
		if (i == data.size())
			return INT;
		i = 1;
		while (n_dot <= 1 && i < data.size())
		{
			if (data[i] == '.')
				n_dot++;
			if (!isdigit(data[i]) && data[i] != '.' && (data[i] != 'f' || i != data.size() - 1))
				return NAN;
			i++;
		}
	}
	else
		return NAN;
	if (n_dot > 1)
		return NAN;
	return (data.at(data.size() - 1) == 'f') ? FLOAT : DOUBLE;
}

std::ostream &operator<<(std::ostream &out, Converter const &c)
{
	out << "rawData = " << c.getRawData() << std::endl;
	out << "dataType = " << c.getDataType() << std::endl;

	return out;
}
