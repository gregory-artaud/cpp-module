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
		WrongCat(const WrongCat &c);
		WrongCat	& operator=(const WrongCat &c);
		void	makeSound(void) const;
};
#endif
