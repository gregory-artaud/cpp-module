#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "=== Working example ===" << std::endl;
	{
		try
		{
			Bureaucrat ok("I'm ok", 80);
			std::cout << ok << std::endl;
			ok.incrementGrade();
			std::cout << ok << std::endl;
			ok.decrementGrade();
			std::cout << ok << std::endl;
		} catch (std::exception &e)
		{
			std::cout << "This should not be displayed" << std::endl;
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "=== Max grade example ===" << std::endl;
	{
		try
		{
			Bureaucrat max("Max", 1);
			std::cout << max << std::endl;
			max.incrementGrade();
			std::cout << "This should not be displayed" << std::endl;
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
			std::cout << "This should not be displayed" << std::endl;
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
			std::cout << "This should not be displayed" << std::endl;
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
			std::cout << "This should not be displayed" << std::endl;
		}
		catch (const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
