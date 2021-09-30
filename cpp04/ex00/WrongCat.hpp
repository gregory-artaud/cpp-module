#ifndef WRONGCAT_H
#define WRONGCAT_H
#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal  
{
	private:

	public:

		WrongCat();
		~WrongCat();
		void	makeSound(void) const;
};
#endif
