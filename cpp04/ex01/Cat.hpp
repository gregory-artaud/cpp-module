#ifndef CAT_H
#define CAT_H
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;

	public:

		Cat();
		~Cat();
		void	makeSound(void) const;
		Cat(const Cat &d);
		Cat	& operator=(const Cat &d);
		Brain*	getBrain(void) const;
};
#endif
