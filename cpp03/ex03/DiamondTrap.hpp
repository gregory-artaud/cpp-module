#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

	public:

		DiamondTrap(void);
		DiamondTrap(DiamondTrap const & src);

		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap &	operator=(DiamondTrap const & rhs);
		void attack(const std::string & target);
		void whoAmI(void);
	private:
		std::string name;

};

#endif /* ***************************************************** DIAMONDTRAP_H */
