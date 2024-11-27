#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
}
AMateria::AMateria(std::string const &type) : type(type)
{
	this->type = type;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}
