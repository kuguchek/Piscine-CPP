#include "Array.hpp"
#include "Array.cpp"
#include <iostream>

int		main(void)
{
	srand(time(0));
	Array <int>	array(15);

	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = rand() % 100;
	unsigned int idx = rand() % 25;
	try {
		for (unsigned int n = 0; n < array.size(); n++)
			std::cout << "Array[" << n << "] = " << array[n] << std::endl;
		std::cout << "trying to get element with index " << idx << std::endl;
		std::cout << array[idx] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}