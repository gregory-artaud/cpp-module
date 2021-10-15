#ifndef ZOMBIE_H
#define ZOMBIE_H
#pragma once
	
#include <string>
#include <iostream>

class Zombie  
{
	private:
		std::string	name;

	public:

		Zombie();
		~Zombie();
		static Zombie*	newZombie( std::string name );
		static void randomChump( std::string name );
		void announce( void );
};
#endif
