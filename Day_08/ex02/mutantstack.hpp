#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>

template <typename T> 
class MutantStack : public std::stack<T> {
	public:
		MutantStack<T>() {} ;
		MutantStack(const MutantStack & rhs) { *this = rhs;}
		~MutantStack<T>() {} ;
		
		MutantStack & operator=(const MutantStack & rhs) {
			_mutant = rhs._mutant;
			return *this;
		}
		T size(void) {return _mutant.size();}
		bool empty() {return _mutant.empty();}
		void pop() {return _mutant.pop_front();}
		T top(void) {return _mutant.front(); }
		void push(T val) { return _mutant.push_front(val);}

		typedef typename std::list<T>::iterator iterator;
		iterator begin(void) {return _mutant.begin();}
		iterator end(void) {return _mutant.end();}
	private:
		std::list<T> _mutant;
};

#endif