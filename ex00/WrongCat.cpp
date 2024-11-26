#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "Wrong cat";
	std::cout << "Wrong cat constructor called" << std::endl;
};
WrongCat::WrongCat(const WrongCat &original)
{
	this->type = original.type;
	std::cout << "Wrong cat copy constructor called" << std::endl;
};
WrongCat &WrongCat::operator=(const WrongCat &original)
{
	if (this != &original)
		this->type = original.type;
	std::cout << "Wrong cat assignment operator called" << std::endl;
	return (*this);
};
void WrongCat::makeSound(void) const
{
	std::cout << "BARK BARK" << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor called" << std::endl;
};