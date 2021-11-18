#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=(RobotomyRequestForm const & rhs);
		void 						execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
