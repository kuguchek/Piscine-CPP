#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <vector>
#include <exception>

class Span {
	private:
		unsigned int _n;
		std::vector<int> _v;
	public:
		Span();
		~Span();
		Span(unsigned int n);
		Span(const Span & rhs);
		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();
		void insertVec(std::vector<int> vec);

		Span & operator=(const Span & rhs);
		class tooLowElemExc : public std::exception {
		public:
			virtual const char *what() const throw() {
				return ("no elements to count span");
			}
		};
		class tooMuchElemExc : public std::exception {
		public:
			virtual const char *what() const throw() {
				return ("too much elems");
			}
		};
};

#endif