#ifndef ICE_H
#define ICE_H
#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		~Ice();
		Ice(const Ice & i);

		Ice & operator=(const Ice & rhs);
		Ice* clone() const;
		void use(ICharacter& target);
};
#endif
