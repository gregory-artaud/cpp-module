#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#pragma once

#include <string>
#include <iostream>

class WrongAnimal  
{
	protected:
		std::string	type;

	private:

	public:

		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal	& operator=(const WrongAnimal &d);
		void	makeSound(void) const;
		std::string	getType(void) const;
};
#endif
