#ifndef STRUCT_HPP
# define STRUCT_HPP

#include <iostream>
#include <ctime>

struct Data {
	std::string s1; 
	int n;
	std::string s2; 
};

void *serialize(void);
Data *deserialize(void *raw);

#endif
