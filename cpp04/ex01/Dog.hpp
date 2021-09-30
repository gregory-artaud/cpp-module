#ifndef DOG_H
#define DOG_H
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;

	public:

		Dog();
		~Dog();
		void	makeSound(void) const;
		Dog(const Dog &d);
		Dog	& operator=(const Dog &d);
		Brain*	getBrain(void) const;
};
#endif
