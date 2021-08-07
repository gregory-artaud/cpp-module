#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:
		Peon(std::string name);
		Peon( Peon const & src );
		~Peon();

		Peon &		operator=( Peon const & rhs );
		std::ostream &	operator<<( std::ostream & o ) const;
		void getPolymorphed(void) const;

	private:

};

std::ostream &	operator<<( std::ostream & o, Peon const &p );

#endif /* ************************************************************ PEON_H */
