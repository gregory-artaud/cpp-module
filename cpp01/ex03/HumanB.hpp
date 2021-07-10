#ifndef HUMANB_H
#define HUMANB_H
#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB  
{
	private:

		std::string name;
		const Weapon* weapon;

	public:

		HumanB( const std::string& name );
		~HumanB();
		void setWeapon( const Weapon& weapon );
		void attack( void );

};
#endif
