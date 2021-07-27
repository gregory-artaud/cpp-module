#include "Karen.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Karen::Karen(std::string filter)
{
	this->filter = filter;
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
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

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
		{
			if (i >= filterToInt(this->filter))
				return (this->*msg_fn[i])();
			else
				return ;
		}
	std::cerr << "This complain does not exist." << std::endl;
}

void Karen::debug( void )
{
	std::cout << "[" << this->levels[DEBUG] << "]" << std::endl;
	std::cout << DEBUG_MSG << std::endl;
}

void Karen::info( void )
{
	std::cout << "[" << this->levels[INFO] << "]" << std::endl;
	std::cout << INFO_MSG << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[" << this->levels[WARNING] << "]" << std::endl;
	std::cout << WARNING_MSG << std::endl;
}

void Karen::error( void )
{
	std::cout << "[" << this->levels[ERROR] << "]" << std::endl;
	std::cout << ERROR_MSG << std::endl;
}

int Karen::filterToInt(std::string filter)
{
	if (filter.empty())
		return (0);
	for (int i = 0; i < 4; i++)
		if (filter == this->levels[i])
			switch (i)
			{
				case DEBUG:
					return DEBUG;
				case INFO:
					return INFO;
				case WARNING:
					return WARNING;
				case ERROR:
					return ERROR;
				default:
					return -1;
			}
	return -1;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
