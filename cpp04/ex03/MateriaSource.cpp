#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MATERIA_SIZE; i++) this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < MATERIA_SIZE; i++) this->_materias[i] = src._materias[i];
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MATERIA_SIZE; i++)
	{
		if (this->_materias[i] != NULL)
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &)
{
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < MATERIA_SIZE; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MATERIA_SIZE; i++)
	{
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (NULL);
}