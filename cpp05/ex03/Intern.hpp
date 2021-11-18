#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
#  include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		class UnknownForm : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Intern &		operator=( Intern const & rhs );
		Form* makeForm(std::string const & formName, std::string const & target);

	private:

};

#endif /* ********************************************************** INTERN_H */
