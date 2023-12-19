#include "../headers/WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &src ) : WrongAnimal(src) {
    *this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "looks like a Wrong Cat sound!" << std::endl;
}
