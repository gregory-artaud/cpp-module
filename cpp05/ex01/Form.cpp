#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): _name(""), _signed(false), _grade_to_sign(0), _grade_to_execute(0)
{
}

Form::Form( const Form & src ): _name(src._name),
	_signed(src._signed),
	_grade_to_sign(src._grade_to_sign),
	_grade_to_execute(src._grade_to_execute)
{
}

Form::Form( std::string const &name, int const grade_to_sign, int const grade_to_execute ):
	_name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << " " << i.getGradeToSign() << "/" << i.getGradeToExecute() << " ";
	if ( i.getSigned() )
		o << "signed";
	else
		o << "not signed";
	o << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

Form &				Form::beSigned(Bureaucrat const & b)
{
	if ( b.getGrade() > this->_grade_to_sign )
		throw Form::GradeTooLowException();
	this->_signed = true;
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string				Form::getName() const
{
	return this->_name;
}

bool					Form::getSigned() const
{
	return this->_signed;
}

int						Form::getGradeToSign() const
{
	return this->_grade_to_sign;
}

int						Form::getGradeToExecute() const
{
	return this->_grade_to_execute;
}

/* ************************************************************************** */
