#include "Karen.hpp"

int main(int argc, char** argv)
{
	std::string filter;
	
	if (argc > 2)
	{
		std::cout << "Too many arguments." << std::endl;
		return (1);
	}
	filter = "";
	if (argc == 2)
		filter = argv[1];

	Karen k(filter);

	if (k.filterToInt(filter) < 0)
	{
		std::cout << BAD_FILTER_MSG << std::endl;
		return (0);
	}
	std::cout << "=== Empty call ===" << std::endl;
	k.complain("");
	std::cout << "=== DEBUG call ===" << std::endl;
	k.complain("DEBUG");
	std::cout << "=== INFO call ===" << std::endl;
	k.complain("INFO");
	std::cout << "=== WARNING call ===" << std::endl;
	k.complain("WARNING");
	std::cout << "=== ERROR call ===" << std::endl;
	k.complain("ERROR");
	std::cout << "=== Random call ===" << std::endl;
	k.complain("DEBUGsdfs");

	return (0);
}
