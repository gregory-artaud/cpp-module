#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor call" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) 
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor call" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::guardGate(void)
{
	std::cout << "SC4V-TP " << this->name << " has enterred in Gate keeper mode" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
