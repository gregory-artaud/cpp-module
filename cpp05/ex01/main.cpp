#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	std::cout << "=== Form example ===" << std::endl;
	{
		try
		{
			Form form("form", 42, 21);
			std::cout << form << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Form signature success example ===" << std::endl;
	{
		try
		{
			Form form("form", 42, 21);
			Bureaucrat max("max", 1);

			std::cout << max << std::endl;
			std::cout << form << std::endl;
			max.signForm(form);
			std::cout << form << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Form signature failure example ===" << std::endl;
	{
		try
		{
			Form form("form", 42, 21);
			Bureaucrat max("max", 61);

			std::cout << max << std::endl;
			std::cout << form << std::endl;
			max.signForm(form);
			std::cout << form << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
