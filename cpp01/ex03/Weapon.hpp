#ifndef WEAPON_H
#define WEAPON_H
#pragma once

#include <string>

class Weapon  
{
	private:

		std::string	type;

	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string const &getType( void ) const;
		void setType( std::string type );

};
#endif
