#include "../headers/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
    this->_brain = new Brain(*(src._brain));
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
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

void	Cat::makeSound() const
{
	std::cout << "looks like a Cat sound!" << std::endl;
}
