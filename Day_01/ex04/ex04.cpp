#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string &ref = str;
	std::string *point = &str;

	std::cout << ref << std::endl;
	std::cout << *point << std::endl;
}