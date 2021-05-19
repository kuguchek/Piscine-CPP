#include <iostream>

template <typename T> 
void iter(T *arr, int len, void (*f)(T & )) { 
	for (int i = 0; i < len; i++)
		(*f)(arr[i]);
}

template <typename T> 
void printer (T & arr) {
	std::cout << arr << std::endl;
}

int		main(void)
{
	int			intarr[] = {1, 2, 3, 4, 5, 6, 7};
	float		floatarr[] = {1.5, 2.1, 4.6, 9.3};
	std::string strarr[] = {"One", "Two", "Three", "Four"};
	char		chararr[] = {'a', 'b', 'c', 'd', 'e', 'f'};

	std::cout << "printing an array of ints..." << std::endl;
	iter <int>(intarr, 7, &printer<int>);
	std::cout << "printing an array of floats..." << std::endl;
	iter <float>(floatarr, 4, &printer<float>);
	std::cout << "printing an array of strings..." << std::endl;
	iter <std::string>(strarr, 4, printer<std::string>);
	std::cout << "printing an array of chars..." << std::endl;
	iter <char>(chararr, 6, printer<char>);
}