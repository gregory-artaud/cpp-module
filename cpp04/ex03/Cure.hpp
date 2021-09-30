#ifndef CURE_H
#define CURE_H
#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria  
{
	private:

	public:

		Cure();
		~Cure();
		Cure(const Cure & a);

		Cure & operator=(const Cure & rhs);
		Cure* clone() const;
		void use(ICharacter& target);
};
#endif
