#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H
#pragma once

#include <iostream>
#include "ErrorHandlerConfig.hpp"

class ErrorHandler  
{
	private:

		int errorCode;
		int argc;
		char** argv;

	public:

		ErrorHandler();
		~ErrorHandler();
		ErrorHandler(int argc, char** argv);
		int getErrorCode(void) const;
		int getArgc(void) const;
		char** getArgv(void) const;
		void setArgc(const int argc);
		void setArgv(char** const argv);
		int	checkArgs(void);
		static int throwError(const int code);

};
#endif
