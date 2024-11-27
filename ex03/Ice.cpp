#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
	std::cout << "Ice cube constructed" << std::endl;
}

Ice::Ice(std::string const &type)
{
	std::cout << "Ice cube constructed" << std::endl;
	this->type = type;
}
AMateria *Ice::clone(void) const
{
	return (NULL);
};
void Ice::use(ICharacter &target)
{
	(void)target;
	return ;
};
Ice &Ice::operator=(const Ice &original)
{
	if (this != &original)
		this->type = original.type;
	return (*this);
};

Ice::~Ice()
{
	std::cout << "ice descrutor called" << std::endl;
}