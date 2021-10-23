#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};	
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};	
		Bureaucrat();
		Bureaucrat(const Bureaucrat & b);
		Bureaucrat(const std::string & name, const int & grade);
		~Bureaucrat();
		
		Bureaucrat & operator=(const Bureaucrat &b);
		
		const std::string & getName(void) const;
		const int & getGrade(void) const;

		void incrementGrade(void);
		void decrementGrade(void);

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &b);

#endif