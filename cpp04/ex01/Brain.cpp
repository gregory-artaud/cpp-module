#include "Brain.hpp"  
	
Brain::Brain()
{
	std::cout << "Brain constructed" << std::endl;
}
	
Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain &d)
{
	for (int i = 0; i < NB_IDEA; i++)
		this->ideas[i] = d.ideas[i];
	std::cout << "Brain constructed by copy" << std::endl;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < NB_IDEA; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

void	Brain::setFirstIdea(const std::string &s)
{
	this->ideas[0] = s;
}

std::string Brain::getFirstIdea(void) const
{
	return (this->ideas[0]);
}
