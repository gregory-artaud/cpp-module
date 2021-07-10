#include "HumanB.hpp"  
	
HumanB::HumanB(const std::string& name):
	name(name), weapon(NULL)
{

}
	
HumanB::~HumanB()
{
	
}

void HumanB::setWeapon( const Weapon& weapon )
{
	this->weapon = &weapon;
}

void HumanB::attack( void )
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
