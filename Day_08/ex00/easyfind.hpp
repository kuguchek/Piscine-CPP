#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

class NotFoundException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("there is no such value");
		}
};

template <typename T> 
typename T::iterator easyfind (T & a, int b) {
	typename T::iterator it;
	it = find(a.begin(), a.end(), b);
	if (it == a.end())
		throw NotFoundException();
	return it;
}

#endif