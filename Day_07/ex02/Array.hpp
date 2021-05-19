#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template<typename T>
class Array {
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array & copy);

		Array & operator=(const Array & rhs);
		T & operator[](unsigned int idx);
		unsigned int size(void) const;
		class AccecingOutOfLimits : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("accecing element out of array limits!");
			}
		};	
	private:
		T *_arr;
		unsigned int _n;
};

#endif