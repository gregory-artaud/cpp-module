#include "ErrorHandler.hpp"

int ErrorHandler::throwError(const int code)
{
	std::cout << PROGRAM_NAME << ": ";
	switch (code)
	{
	case TOO_FEW_ARGS:
		std::cout << TOO_FEW_ARGS_MSG;
		break;
	case TOO_MANY_ARGS:
		std::cout << TOO_MANY_ARGS_MSG;
		break;
	case EMPTY_ARG:
		std::cout << EMPTY_ARG_MSG;
		break;
	case FILE_DO_NOT_EXISTS:
		std::cout << FILE_DO_NOT_EXISTS_MSG;
		break;
		break;
	case CANNOT_CREATE_FILE:
		std::cout << CANNOT_CREATE_FILE_MSG;
	default:
		std::cout << UNKNOWN_ERROR_MSG;
		break;
	}
	std::cout << std::endl;
	return (code);
}
