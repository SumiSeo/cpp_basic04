#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();

	int num = 10;
	const Animal *hordes[num];

	for (int index = 0; index < num; index++)
	{
		if (index % 2)
			hordes[index] = new Dog();
		else
			hordes[index] = new Cat();
	}

	std::cout << std::endl;
	std::cout << std::endl;

	for (int j = 0; j < num; j++)
		delete hordes[j];
	return (0);
}