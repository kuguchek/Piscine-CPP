#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
	srand(time(0));
	std::vector <int> vec;
	int val = rand() % 100;
	std::cout << "value to find: " << val << std::endl;
	int len = 20;
	for (int i = 0; i < len; i++) {
		int myint = rand() % 100;
		std::cout << myint << " ";
		vec.push_back(myint);
	}
	std::cout << std::endl;
	try  {
		easyfind(vec, val);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}