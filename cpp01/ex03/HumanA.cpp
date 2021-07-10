#include "HumanA.hpp"  
	
HumanA::HumanA(const std::string& name, const Weapon& weapon):
	name(name), weapon(weapon)
{

}
	
HumanA::~HumanA()
{
	
}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
