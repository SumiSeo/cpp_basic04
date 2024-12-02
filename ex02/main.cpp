#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;

	Animal *arr[10];
	for (int i = 0; i < 5; i++)
		arr[i] = new Dog();
	for (int i = 0; i < 5; i++)
		delete arr[i];
	return (0);
}