#include "ErrorHandler.hpp"  
	
ErrorHandler::ErrorHandler()
{
	this->errorCode = 0;
}
	
ErrorHandler::~ErrorHandler()
{
	
}

ErrorHandler::ErrorHandler(int argc, char** argv)
{
	this->errorCode = 0;
	this->argc = argc;
	this->argv = argv;
}

int ErrorHandler::getErrorCode(void) const
{
	return (this->errorCode);
}

int ErrorHandler::getArgc(void) const
{
	return (this->argc);
}
char** ErrorHandler::getArgv(void) const
{
	return (this->argv);
}

void ErrorHandler::setArgc(const int argc)
{
	this->argc = argc;
}

void ErrorHandler::setArgv(char** const argv)
{
	this->argv = argv;
}

int	ErrorHandler::checkArgs(void)
{
	int	error;

	error = 0;
	if (this->argc == NB_ARGS)
		return (0);
	if (this->argc < NB_ARGS)
		error = throwError(TOO_FEW_ARGS);
	else
		error = throwError(TOO_MANY_ARGS);
	this->errorCode = error;
	return (error);
}
