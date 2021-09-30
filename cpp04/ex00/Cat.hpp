#ifndef CAT_H
#define CAT_H
#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:

		Cat();
		~Cat();
		void	makeSound(void) const;
};
#endif
