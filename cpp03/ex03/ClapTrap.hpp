#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:

	public:

		ClapTrap(std::string name);
		~ClapTrap();

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		ClapTrap();
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;

};

#endif /* ******************************************************** CLAPTRAP_H */
