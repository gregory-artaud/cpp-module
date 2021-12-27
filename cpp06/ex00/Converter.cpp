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
	this->rawData = rawData;
	this->dataType = getDataType(rawData);
	if (this->dataType == CHAR)
		this->data = static_cast<double>(rawData.at(0));
	this->data = (this->dataType == UNKNOWN) ? 0 : std::atof(rawData.c_str());
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

	if (this->dataType == CHAR)
		return rawData;
	if (this->dataType == NAN || this->dataType == UNKNOWN)
		return "Impossible";
	c = static_cast<char>(this->data);
	std::cout << "test: " << c << std::endl;
	//if (std::isprint(c))
	//	return "'" + c + "'";
	return "Non displayable";
}

std::string Converter::toInt() const
{
	return "";
}

std::string Converter::toFloat() const
{
	return "";
}

std::string Converter::toDouble() const
{
	return "";
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
