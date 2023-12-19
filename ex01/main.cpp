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

// 	Dog basic;
// 	{
// 		Dog tmp = basic;
// 	}
}

/*

Dog basic exemple :

Construction de l'Animal (classe de base).
Construction du Dog, qui appelle également le constructeur de Brain.
Construction de la copie tmp de l'objet basic, appelant le constructeur de copie de Brain.
Destruction de tmp dans la portée, appelant le destructeur du Dog temporaire, puis le destructeur de l'Animal temporaire (ce qui déclenche la destruction du Brain temporaire).
Destruction de basic, appelant le destructeur du Dog basic, puis le destructeur de l'Animal basic (ce qui déclenche la destruction du Brain basic).

*/
