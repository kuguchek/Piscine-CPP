#include "Array.hpp"

template <typename T> 
	Array<T>::Array() : _n(0), _arr(NULL) {}

template <typename T> 
Array<T>::Array(unsigned int n) : _n(n) {
	_arr = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_arr[i] = 0;
}

template <typename T> 
Array<T>::Array(const Array<T> & copy) {
	*this = copy;
}

template <typename T> 
Array<T>::~Array() {
	delete [] _arr;
}

template <typename T> 
unsigned int Array<T>::size() const {
	return _n;
}

template <typename T> 
Array<T> & Array<T>::operator=(Array<T> const & rhs ) 
{
	delete [] _arr;
	_n = rhs._n;
	_arr = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_arr[i] = rhs._arr[i];
	return *this;
}

template <typename T> 
T & Array<T>::operator[](unsigned int idx) {
	if (idx >= _n)
		throw AccecingOutOfLimits();
	else
		return _arr[idx];
}
