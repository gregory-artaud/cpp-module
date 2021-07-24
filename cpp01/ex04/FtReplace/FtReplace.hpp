#ifndef FTREPLACE_H
#define FTREPLACE_H
#pragma once
	
#include <fstream>
#include <cstdlib>
#include "ErrorHandler.hpp"

#define REPLACE_EXT ".replace"

class FtReplace  
{
	private:

	public:

		FtReplace();
		~FtReplace();
		static int ftReplace(std::string s1, std::string s2, std::string fileName);

};
#endif
