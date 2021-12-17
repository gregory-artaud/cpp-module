#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

// Default constructor
DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor call" << std::endl;
	this->name = "Default";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage	= 100;
	this->ClapTrap::name = this->name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor call" << std::endl;
	this->name = name;
	this->hit_points = this->FragTrap::hit_points;
	this->energy_points = this->ScavTrap::energy_points;
	this->attack_damage = this->FragTrap::attack_damage;
	this->ClapTrap::name = name + "_clap_name";

}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy constructor call" << std::endl;
	*this = copy;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor call" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap operator= call" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->ClapTrap::name = rhs.ClapTrap::name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return *this;
}
/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "D4MD-TP My name is " << this->name << " but my ClapTrap name is "
		<< this->ClapTrap::name << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
