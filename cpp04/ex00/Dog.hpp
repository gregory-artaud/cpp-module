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
		void	makeSound(void) const;
};
#endif
