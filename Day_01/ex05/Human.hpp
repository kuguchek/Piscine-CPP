#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <iostream>
#include "Brain.hpp"

class Human {
	public:
		Human(void);
		~Human(void);
		std::string identify() const;
		const Brain &getBrain(void);
	private:
		Brain _br;
};

#endif
