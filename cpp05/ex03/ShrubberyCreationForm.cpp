#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this != &rhs)
	{
		this->Form::operator=(rhs);
		this->_target = rhs._target;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void								ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream					file(_target + FILE_SUFFIX);
	if (!this->getSigned() || executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	file << "îîîîîîîî (ceci est une forêt)";
	file.close();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
