#ifndef ANIMAL_H
#define ANIMAL_H
#pragma once
	
#include <string>
#include <iostream>

class Animal  
{
	protected:
		std::string	type;

	private:

	public:

		Animal();
		virtual ~Animal();
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
		Animal(const Animal &a);
		Animal	& operator=(const Animal &d);
};
#endif
