
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
	std::cout << "Animal desstructor called" << std::endl;
};
void Animal::makeSound(void) const
{
	if (this->type == "Dog")
		std::cout << " >_< " << std::endl;
	else if (this->type == "Cat")
		std::cout << " -_- " << std::endl;
	else
		std::cout << " o_o " << std::endl;
};
std::string Animal::getType(void) const
{
	return (this->type);
};
