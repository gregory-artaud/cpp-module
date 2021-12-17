#ifndef CHARACTER_H
#define CHARACTER_H
#pragma once

#include "ICharacter.hpp"
#define INVENTORY_SIZE 4

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[INVENTORY_SIZE];

	public:

		Character();
		Character(std::string const & name);
		Character(const Character &);
		~Character();

		Character & operator=(const Character &);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif
