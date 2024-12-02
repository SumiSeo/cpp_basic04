#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(std::string const &type)
{
	this->type = type;
}
AMateria *Ice::clone(void) const
{
	return (new Ice());
};
void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolat at " << target.getName() << " *" << std::endl;
};
Ice &Ice::operator=(const Ice &original)
{
	if (this != &original)
		this->type = original.type;
	return (*this);
};

Ice::~Ice()
{
}