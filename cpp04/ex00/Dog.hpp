#ifndef DOG_H
#define DOG_H
#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:

		Dog();
		~Dog();
		Dog(const Dog &d);
		Dog	& operator=(const Dog &d);
		void	makeSound(void) const;
};
#endif
