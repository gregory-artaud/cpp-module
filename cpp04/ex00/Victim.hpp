#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim(std::string name);
		Victim( Victim const & src );
		~Victim();

		Victim &		operator=( Victim const & rhs );
		std::ostream &	operator<<(std::ostream & o) const;

		std::string getName(void) const;
		void setName(std::string name);
		virtual void getPolymorphed(void) const;

	private:
		std::string name;

};

std::ostream &	operator<<( std::ostream & o, Victim const &v );

#endif /* ********************************************************** VICTIM_H */
