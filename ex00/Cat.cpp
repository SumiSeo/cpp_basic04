#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
};
Cat::Cat(const Cat &original)
{
	this->type = original.type;
	std::cout << "Cat copy constructor called" << std::endl;
};
Cat &Cat::operator=(const Cat &original)
{
	if (this != &original)
		this->type = original.type;
	std::cout << "assignment operator called" << std::endl;
	return (*this);
};
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
};
