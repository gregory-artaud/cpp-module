#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

# define DEBUG_MSG "I love to get extra bacon \
for my 7XL-double-cheese-triple-pickle-special-ketchup \
burger. I just love it!"
# define INFO_MSG "I cannot believe adding extra \
bacon cost more money. You don’t put enough! \
If you did I would not have to ask for it!"
# define WARNING_MSG "I think I deserve to have some extra bacon for free. \
I’ve been coming here for years and you just \
started working here last month."
# define ERROR_MSG "This is unacceptable, I want to speak to the manager now."
# define BAD_FILTER_MSG "[ Probably complaining about insignificant problems ]"

enum e_levels {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen
{

	public:

		Karen(std::string filter);
		~Karen();
		void complain( std::string level );
		int filterToInt(std::string filter);

	private:
		std::string filter;
		std::string levels[4];

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif /* *********************************************************** KAREN_H */
