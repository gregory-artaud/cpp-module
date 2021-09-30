#ifndef BRAIN_H
#define BRAIN_H
#pragma once

#include <string>
#include <iostream>

#define NB_IDEA 100
class Brain  
{
	private:
		std::string ideas[NB_IDEA];
	public:

		Brain();
		~Brain();
		Brain(const Brain &d);
		Brain	& operator=(const Brain &d);
		void	setFirstIdea(const std::string &s);
		std::string getFirstIdea(void) const;
};
#endif
