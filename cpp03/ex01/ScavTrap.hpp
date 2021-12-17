#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap(void);
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const & rhs);
		void guardGate(void);
	private:

};

#endif /* ******************************************************** SCAVTRAP_H */
