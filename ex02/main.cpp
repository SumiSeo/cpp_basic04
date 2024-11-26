#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	// const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();
	// delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}