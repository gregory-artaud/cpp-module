#include "phone_book.hpp"

int		get_type(std::string s)
{
	if (s == EXIT_STRING)
		return (EXIT_TYPE);
	else if (s == ADD_STRING)
		return (ADD_TYPE);
	else if (s == SEARCH_STRING)
		return (SEARCH_TYPE);
	else
		return (IGNORE_TYPE);
}

bool	exec(Book *book, std::string cmd)
{
	int	type;

	type = get_type(cmd);
	if (type == IGNORE_TYPE)
		return (false);
	else if (type == EXIT_TYPE)
		return (true);
	else if (type == ADD_TYPE)
		book->add_contact();
	else if (type == SEARCH_TYPE)
		book->search_contact();
	return (false);
}

void	start_prompt(void)
{
	std::cout << "My Awesome Phone Book !" << std::endl;
	std::cout << "Available commands:" << std::endl;
	std::cout << "\t- ADD" << std::endl;
	std::cout << "\t- SEARCH" << std::endl;
	std::cout << "\t- EXIT" << std::endl;
}

int		main(void)
{
	Book		book;
	std::string	input;
	bool		end;

	start_prompt();
	do {
		std::getline(std::cin, input);
		end = exec(&book, input);
	} while (!end);

	return (EXIT_SUCCESS);
}
