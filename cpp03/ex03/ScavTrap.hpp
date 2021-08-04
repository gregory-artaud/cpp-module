#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap(std::string name);
		~ScavTrap();

		void guardGate(void);
		
	protected:
		ScavTrap();
};

#endif /* ******************************************************** SCAVTRAP_H */
