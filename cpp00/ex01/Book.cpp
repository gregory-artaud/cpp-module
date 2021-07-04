#include "Book.hpp"

Book::Book(void)
{
	this->no_contacts = 0;
}

Book::~Book(void)
{
	return ;
}

void	Book::add_contact(void)
{
	if (this->no_contacts == MAX_CONTACT_NUMBER)
		std::cout << "Maximum number of contact reached !" << std::endl;
	else
	{
		this->contacts[this->no_contacts++].fill_informations();
		std::cout << "Contact added !" << std::endl;
	}

}

void	Book::search_contact(void)
{
	int	index;

	std::cout << SEARCH_HEADER << std::endl;
	for (int i = 0; i < this->no_contacts; i++)
		this->contacts[i].print_header_infos(i);
	std::cout << "Index: ";
	std::cin >> index;
	std::cout << std::endl;
	if (index < 0 || index >= this->no_contacts)
		std::cout << "Wrong index" << std::endl;
	else
		this->contacts[index].print_full_infos(); 
	return ;
}
