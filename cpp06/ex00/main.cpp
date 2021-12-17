#include <cstdlib>
#include <iostream>
#include <string>

enum dataType {
	UNKNOWN,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NAN,
	INFINITY,
	MINFINITY
};

int getDataType(std::string s)
{
	size_t i;
	int n_dot;

	n_dot = 0;
	if (s.empty())
		return UNKNOWN;
	if (s == "-inf" || s == "-inff")
		return MINFINITY;
	if (s == "inf" || s == "inff")
		return INFINITY;
	if (!isdigit(s.front()) && s.size() == 1)
		return CHAR;
	if (s.front() == '-' || isdigit(s.front()))
	{
		i = 1;
		while (isdigit(s[i]) && i < s.size())
			i++;
		if (i == s.size())
			return INT;
		i = 1;
		while (n_dot <= 1 && i < s.size())
		{
			if (s[i] == '.')
				n_dot++;
			if (!isdigit(s[i]) && s[i] != '.' && (s[i] != 'f' || i != s.size() - 1))
				return NAN;
			i++;
		}
	}
	else
		return NAN;
	if (n_dot > 1)
		return NAN;
	return (s.back() == 'f') ? FLOAT : DOUBLE;
}

//void process(int dataType, std::string s)
//{
//	double number;
//
//	if (dataType == INT || dataType == FLOAT || dataType == DOUBLE)
//		number = atof(s.c_str());
//	switch (dataType)
//	{
//		case CHAR :
//
//			break ;
//	}
//}

int main(int argc, char const *argv[])
{
	int dataType;

	if (argc != 2)
	{
		std::cout << "Usage: ./convert [litteral number]" << std::endl;
		return (EXIT_FAILURE);
	}
	dataType = getDataType(argv[1]);
	//process(dataType, argv[1]);
	std::cout << "dataType: " << dataType << std::endl;
	return EXIT_SUCCESS;
}