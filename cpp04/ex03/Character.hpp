#ifndef CHARACTER_H
#define CHARACTER_H
#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

	public:

		Character();
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif
