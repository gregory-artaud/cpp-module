#ifndef DATA_H
#define DATA_H
#pragma once
	
class Data  
{
	private:

	public:

		Data();
		Data(Data const & src);
		~Data();

		Data & operator=(Data const & rhs);
};
#endif