#include <iostream>
#include <vector>
#include "span.hpp"

int main() {
	srand(time(0));
	Span sp = Span(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(12);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Span sp1 = Span(10);
	try
	{
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Span sp2 = Span(11000);
	std::vector<int> ve;
	for (int i = 0; i < 11000; i++)
		ve.push_back(rand() % 110000);
	sp2.insertVec(ve);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}