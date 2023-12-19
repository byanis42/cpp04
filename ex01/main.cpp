#include "headers/Cat.hpp"
#include "headers/Dog.hpp"

int main()
{
	int arr_size = 4;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal* animals[arr_size];

	for (int k = 0; k < (arr_size / 2); k++)
		animals[k] = new Dog();
	for (int k = (arr_size / 2); k < arr_size; k++)
		animals[k] = new Cat();
	for ( int k = 0; k < arr_size; k++)
		delete animals[k];

	delete j;	//should not create a leak
	delete i;

	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
}

/*

For the Dog basic example :

Animal constructor called
Dog constructor called
Brain constructor called
Brain Destructor called   // Destruction of the Brain created in Dog
Dog Destructor called    // Destruction of the Dog, which triggers the Animal destructor
Animal destructor called // Destruction of the Animal
Brain Destructor called   // Destruction of the Brain created in the temporary Dog (tmp) within the scope
Dog Destructor called    // Destruction of the temporary Dog (tmp)

*/
