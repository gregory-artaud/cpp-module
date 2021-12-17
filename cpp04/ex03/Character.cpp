#include "Character.hpp"  
	
Character::Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++) this->inventory[i] = NULL;
}
	
Character::Character(std::string const & name)
{
	for (int i = 0; i < INVENTORY_SIZE; i++) this->inventory[i] = NULL;
	this->name = name;
}

Character::Character(const Character &src)
{
	*this = src;
}


Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->inventory[i] != NULL)
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
}

Character & Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < INVENTORY_SIZE; i++)
			this->inventory[i] = rhs.inventory[i];
		this->name = rhs.name;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < INVENTORY_SIZE)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < INVENTORY_SIZE && this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
