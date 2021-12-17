#ifndef ANIMAL_H
#define ANIMAL_H
#pragma once
	
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal  
{
	protected:
		std::string	type;
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();

	private:

	public:

		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
		Animal	& operator=(const Animal &d);

};
#endif
