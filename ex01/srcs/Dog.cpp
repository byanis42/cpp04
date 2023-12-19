#include "../headers/Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
    this->_brain = new Brain(*(src._brain));
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this == &rhs)
        return (*this);

    // Call the base class assignment operator
    Animal::operator=(rhs);

    // Delete the old brain
    delete this->_brain;

    // Create a new brain and use the copy constructor
    this->_brain = new Brain(*(rhs._brain));

    return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "looks Like a Dog sound!" << std::endl;
}
