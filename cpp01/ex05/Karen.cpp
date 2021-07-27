#include "Karen.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Karen::Karen()
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Karen::~Karen()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void Karen::complain( std::string level )
{
	static void (Karen::*msg_fn[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			return (this->*msg_fn[i])();
	std::cerr << "This complain does not exist." << std::endl;
}

void Karen::debug( void )
{
	std::cout << DEBUG_MSG << std::endl;
}

void Karen::info( void )
{
	std::cout << INFO_MSG << std::endl;
}

void Karen::warning( void )
{
	std::cout << WARNING_MSG << std::endl;
}

void Karen::error( void )
{
	std::cout << ERROR_MSG << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
