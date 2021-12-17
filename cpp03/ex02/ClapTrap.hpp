#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(ClapTrap const & src);
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const & rhs);
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;

};

#endif /* ******************************************************** CLAPTRAP_H */
