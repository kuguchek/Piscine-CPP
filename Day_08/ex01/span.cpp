#include "span.hpp"
#include <vector>

Span::Span() : _n(0) {} 

Span::Span(unsigned int n) : _n(n) {
	_v.reserve(_n);
}

Span::~Span() {}

Span::Span(const Span & rhs) {
	*this = rhs;
}

Span & Span::operator=(const Span & rhs) {
	_n = rhs._n;
	_v = rhs._v;
	return *this;
}

void Span::addNumber(int nbr) {
	if (_v.size() == _v.capacity())
		throw tooMuchElemExc();
	else
		_v.push_back(nbr);
}

int Span::shortestSpan() {
	if (_v.size() <= 1)
		throw tooLowElemExc();
	sort(_v.begin(), _v.end());
	return _v.at(1) - _v.at(0);
}

int Span::longestSpan() {
	if (_v.size() <= 1)
		throw tooLowElemExc();
	sort(_v.begin(), _v.end());
	return _v.at(_v.size() - 1) - _v.at(0);
}

void Span::insertVec(std::vector<int> vec) {
	int i = _n - vec.size();
	if (i >= 0)
		_v.insert(_v.end(), vec.begin(), vec.end());
	else
		throw tooMuchElemExc();
}