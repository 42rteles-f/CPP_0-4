#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::Brain(const Brain& tocopy) {
    std::cout << "Brain Copy Constructor called." << std::endl;
	*this = tocopy;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain& tocopy) {
	if (this == &tocopy)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = tocopy.ideas[i];
    return (*this);
}
