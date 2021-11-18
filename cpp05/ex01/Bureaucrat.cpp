#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(150)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat & b): name(b.getName()), grade(b.getGrade())
{
	if (this->grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string & name, const int & grade): name(name), grade(grade)
{
	if (this->grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b)
{
	if (this == &b)
		return *this;
	this->grade = b.getGrade();
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
		
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const std::string & Bureaucrat::getName(void) const
{
	return this->name;
}

const int & Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (this->grade == MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->grade == MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return out;
}
