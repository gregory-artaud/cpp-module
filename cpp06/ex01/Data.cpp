#include "Data.hpp"  
	
Data::Data()
{
	
}
	
Data::~Data()
{
	
}

Data::Data(Data const & src)
{
	*this = src;
}

Data & Data::operator=(Data const & rhs)
{
	(void)rhs;
	return (*this);
}