#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "=== Working example ===" << std::endl;
	{
		Bureaucrat ok("I'm ok", 80);
		std::cout << ok << std::endl;
		ok.incrementGrade();
		std::cout << ok << std::endl;
		ok.decrementGrade();
		std::cout << ok << std::endl;
	}
	std::cout << std::endl;
	std::cout << "=== Max grade example ===" << std::endl;
	{
		try
		{
			Bureaucrat max("Max", 1);
			std::cout << max << std::endl;
			max.incrementGrade();
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Min grade example ===" << std::endl;
	{
		try
		{
			Bureaucrat min("min", 150);
			std::cout << min << std::endl;
			min.decrementGrade();
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Too low at creation grade example ===" << std::endl;
	{
		try
		{
			Bureaucrat min("min", 151);
			std::cout << min << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Too high at creation grade example ===" << std::endl;
	{
		try
		{
			Bureaucrat max("max", 0);
			std::cout << max << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Shruberry example ===" << std::endl;
	{
		try
		{
			ShrubberyCreationForm form("ShrubberyName");
			Bureaucrat max("max", 1);

			std::cout << form << std::endl;
			max.executeForm(form);
			max.signForm(form);
			max.executeForm(form);
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Robotomy example ===" << std::endl;
	{
		try
		{
			RobotomyRequestForm form("RobotomyName");
			Bureaucrat max("max", 1);

			std::cout << form << std::endl;
			max.executeForm(form);
			max.signForm(form);
			max.executeForm(form);
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Presidential example ===" << std::endl;
	{
		try
		{
			PresidentialPardonForm form("PresidentialName");
			Bureaucrat max("max", 1);

			std::cout << form << std::endl;
			max.executeForm(form);
			max.signForm(form);
			max.executeForm(form);
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Intern success example ===" << std::endl;
	{
		try
		{
			Form* form;
			Intern intern;
			Bureaucrat max("max", 1);

			form = intern.makeForm("robotomy request", "Le boloss");
			std::cout << *form << std::endl;
			max.executeForm(*form);
			max.signForm(*form);
			max.executeForm(*form);
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Intern failure example ===" << std::endl;
	{
		try
		{
			Form* form;
			Intern intern;
			Bureaucrat max("max", 1);

			form = intern.makeForm("gdhdfghdfgh", "Le boloss");
			std::cout << *form << std::endl;
			max.executeForm(*form);
			max.signForm(*form);
			max.executeForm(*form);
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
