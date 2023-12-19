#include "../headers/Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &src ) { *this = src; }

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain & Brain::operator=( const Brain &rhs )
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}
