#include "headers/Cat.hpp"
#include "headers/Dog.hpp"

int main()
{
	//Animal abstract_test;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	i->makeSound();
	j->makeSound();

	delete j;	//should not create a leak
	delete i;
}
