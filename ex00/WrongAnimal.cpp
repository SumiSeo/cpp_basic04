#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "Wrong animal";
	std::cout << "Wrong animal constructor called" << std::endl;
};
WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	this->type = original.type;
	std::cout << "Wrong animal copy constructor called" << std::endl;
};
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
	if (this != &original)
		this->type = original.type;
	std::cout << "Wrong animal assignment operator called" << std::endl;
	return (*this);
};
void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong animal do not say anything" << std::endl;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong animal destructor called" << std::endl;
};
