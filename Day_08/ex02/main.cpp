#include "mutantstack.hpp"
# include <iostream>
# include <stack>
# include <iterator>

int main(void)
{
	MutantStack<int> mstack;
	std:: cout << mstack.empty() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.push(0);
	for (int i = 0; i < 25; i++) {
		mstack.push(i);
	}
	std::cout << "top: " << mstack.top() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite) {
		std::cout << *it << std::endl;
		it++; 
	}
	return 0;
}