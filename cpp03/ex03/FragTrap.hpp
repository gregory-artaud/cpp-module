#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap(std::string name);
		~FragTrap();

		void highFivesGuys(void);

	protected:
		FragTrap();

};

#endif /* ******************************************************** FRAGTRAP_H */
