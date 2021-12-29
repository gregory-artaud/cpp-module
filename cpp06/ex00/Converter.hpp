#ifndef CONVERTER_H
#define CONVERTER_H
#pragma once

#include <cstdlib>
#include <string>
#include <iostream>
#include <float.h>
#include <sstream>
#include <cerrno>
#include <limits.h>

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

class Converter  
{
	private:
		std::string rawData;
		double data;
		int dataType;
		
		int getDataType(std::string & data) const;
		std::string intToString(int & i) const;
		std::string floatToString(float & f) const;
		std::string doubleToString(double d) const;
		bool isNumeric(std::string & data) const;
		bool isInt(std::string & data) const;

	public:

		Converter();
		Converter(Converter & src);
		Converter(std::string rawData);
		~Converter();

		Converter & operator=(const Converter &rhs);
		const int & getDataType() const;
		const std::string & getRawData() const;
		std::string toChar() const;
		std::string toInt() const;
		std::string toFloat() const;
		std::string toDouble() const;

};

std::ostream &operator<<(std::ostream &out, Converter const &c);

#endif
