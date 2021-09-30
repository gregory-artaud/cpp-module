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

		virtual void	makeSound(void) const;
		std::string	getType(void) const;
		Animal	& operator=(const Animal &d);
		virtual Brain* getBrain(void) const = 0;

};
#endif
