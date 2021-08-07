#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & src );
		~Sorcerer();

		Sorcerer &		operator=( Sorcerer const & rhs );

		std::string getName(void) const;
		std::string getTitle(void) const;
		void polymorph(Victim const &) const;

	private:

		std::string name;
		std::string title;

};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif /* ******************************************************** SORCERER_H */
