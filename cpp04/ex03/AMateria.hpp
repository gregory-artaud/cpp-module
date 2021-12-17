#ifndef AMATERIA_H
#define AMATERIA_H
#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria  
{
    protected:
		std::string	type;

	public:
		AMateria(std::string const & type);
		AMateria();
		AMateria(const AMateria & a);
		virtual ~AMateria();

		AMateria & operator=(const AMateria & rhs);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
