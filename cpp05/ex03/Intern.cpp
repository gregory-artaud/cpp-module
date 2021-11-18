#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Intern::UnknownForm::what() const throw()
{
	return "Unknown form name";
}

Form* Intern::makeForm(std::string const & formName, std::string const & target)
{
	Form* form;
	int index;
	std::string names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	form = NULL;
	index = -1;
	for (int i = 0; i < 3; i++)
	{
		if (formName == names[i])
		{
			index = i;
			break;
		}
	}
	form = NULL;
	switch (index)
	{
	case 0:
		std::cout << "Intern creates " << formName << std::endl;
		form = new RobotomyRequestForm(target);
		break;
	case 1:
		std::cout << "Intern creates " << formName << std::endl;
		form = new PresidentialPardonForm(target);
		break;
	case 2:
		std::cout << "Intern creates " << formName << std::endl;
		form = new ShrubberyCreationForm(target);
		break;
	default:
		throw UnknownForm();
		break;
	}
	return form;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
