#ifndef HUMANA_H
#define HUMANA_H
#pragma once
	
#include <iostream>
#include "Weapon.hpp"

class HumanA  
{
	private:

		std::string name;
		const Weapon& weapon;

	public:

		HumanA(const std::string& name, const Weapon& weapon);
		~HumanA();
		void attack( void );

};
#endif
