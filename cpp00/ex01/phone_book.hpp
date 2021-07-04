#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <string>
# include "Book.hpp"

# define EXIT_STRING "EXIT"
# define ADD_STRING "ADD"
# define SEARCH_STRING "SEARCH"

enum e_command_type {
	IGNORE_TYPE = -1,
	EXIT_TYPE,
	ADD_TYPE,
	SEARCH_TYPE
};

#endif
