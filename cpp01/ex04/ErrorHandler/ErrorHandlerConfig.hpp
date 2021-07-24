#ifndef ERRORHANDLERCONFIG_HPP
#define ERRORHANDLERCONFIG_HPP

// PROGRAM SPECS
#define PROGRAM_NAME "replace"
#define NB_ARGS 4

// ERROR MESSAGES
#define UNKNOWN_ERROR_MSG "An unknown error occured."
#define TOO_FEW_ARGS_MSG "Too few arguments."
#define TOO_MANY_ARGS_MSG "Too many arguments."
#define EMPTY_ARG_MSG "Empty argument."
#define FILE_DO_NOT_EXISTS_MSG "File do not exists."
#define CANNOT_CREATE_FILE_MSG "Cannot create new file."

enum e_errors_code
{
	TOO_FEW_ARGS = 1,
	TOO_MANY_ARGS,
	EMPTY_ARG,
	FILE_DO_NOT_EXISTS,
	CANNOT_CREATE_FILE
};

#endif
