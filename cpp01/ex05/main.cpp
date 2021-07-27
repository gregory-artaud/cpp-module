#include "Karen.hpp"

int main(void)
{
	Karen k;

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
