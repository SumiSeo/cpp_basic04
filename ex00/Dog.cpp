#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
};
Dog::Dog(const Dog &original)
{
	this->type = original.type;
	std::cout << "Dog copy constructor called" << std::endl;
};
Dog &Dog::operator=(const Dog &original)
{
	if (this != &original)
		this->type = original.type;
	std::cout << "assignment operator called" << std::endl;
	return (*this);
};
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
};

void Dog::makeSound(void) const
{
	std::cout << "DOG DOG" << std::endl;
};
