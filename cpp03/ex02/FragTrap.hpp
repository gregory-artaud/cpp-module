#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap(void);
		FragTrap(FragTrap const & src);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap &		operator=(FragTrap const & rhs);
		void highFivesGuys(void);

	private:

};

#endif /* ******************************************************** FRAGTRAP_H */
