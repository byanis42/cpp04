#include "../headers/Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog( const Dog &src ) : Animal(src) {
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog & Dog::operator=( const Dog &rhs)
{
	if (this == &rhs )
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "looks like a Dog sound!" << std::endl;
}
