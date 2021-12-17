#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# pragma once

#include "IMateriaSource.hpp"

#define MATERIA_SIZE 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[MATERIA_SIZE];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		~MateriaSource();

		MateriaSource & operator=(const MateriaSource &);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
#endif