#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
}

Cure::Cure(std::string const &type)
{
	this->type = type;
}
AMateria *Cure::clone(void) const
{
	return (new Cure());
};
void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};
Cure &Cure::operator=(const Cure &original)
{
	if (this != &original)
		this->type = original.type;
	return (*this);
};

Cure::~Cure()
{
}