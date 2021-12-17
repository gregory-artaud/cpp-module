#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:
		ScavTrap(ScavTrap const & src);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap &	operator=(ScavTrap const & rhs);
		void guardGate(void);
		
	protected:
		ScavTrap();
};

#endif /* ******************************************************** SCAVTRAP_H */
