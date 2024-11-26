
#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal &original)
{
	this->type = original.type;
	std::cout << "Animal copy constructor called" << std::endl;
};

Animal &Animal::operator=(const Animal &original)
{
	if (this != &original)
		this->type = original.type;
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
};
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
};
void Animal::makeSound(void) const
{
	std::cout << " Animal say nothing " << std::endl;
};
std::string Animal::getType(void) const
{
	return (this->type);
};
