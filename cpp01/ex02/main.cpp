#include <string>
#include <iostream>

int	main(void)
{
	std::string s;
	std::string* stringPTR = &s;
	std::string& stringREF = s;

	s = "HI THIS IS BRAIN";
	std::cout << "Memory adress of string: " << &s << std::endl;
	std::cout << "\twith PTR: " << stringPTR << std::endl;
	std::cout << "\twith REF: " << &stringREF << std::endl;
	std::cout << "Content of the string: " << s << std::endl;
	std::cout << "\twith PTR: " << *stringPTR << std::endl;
	std::cout << "\twith REF: " << stringREF << std::endl;
}
