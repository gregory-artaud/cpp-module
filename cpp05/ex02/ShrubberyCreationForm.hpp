#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

# define FILE_SUFFIX "_shrubbery"

class ShrubberyCreationForm: public Form
{

	public:

		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		void 						execute(Bureaucrat const & executor) const;
	private:
		std::string	_target;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
