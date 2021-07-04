#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::fill_informations(void)
{
	std::cout << "First name: ";
	std::cin >> this->first_name;

	std::cout << "Last name: ";
	std::cin >> this->last_name;

	std::cout << "Nickname: ";
	std::cin >> this->nickname;

	std::cout << "Phone number: ";
	std::cin >> this->phone;

	std::cout << "Darkest secret: ";
	std::cin >> this->secret;
}

void	print_info(std::string s)
{
	int	l;

	l = static_cast<int>(s.length());
	if (l > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << s.at(i);
		std::cout << ".";
	}
	else
	{
		for (int i = 0; i < 10 - l; i++)
			std::cout << " ";
		for(int i = 0; i < l; i++)
			std::cout << s.at(i);
	}
}

void	Contact::print_header_infos(int index)
{
	std::cout << "         " << index << "|";
	print_info(this->first_name);
	std::cout << "|";
	print_info(this->last_name);
	std::cout << "|";
	print_info(this->nickname);
	std::cout << std::endl;
}

void	Contact::print_full_infos(void)
{
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}
