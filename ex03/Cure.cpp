#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
	std::cout << "Cure cube constructed" << std::endl;
}

Cure::Cure(std::string const &type)
{
	std::cout << "TypeEE" << type << std::endl;
	this->type = type;
}
AMateria *Cure::clone(void) const
{
	return (NULL);
};
void Cure::use(ICharacter &target)
{
	(void)target;
	return ;
};
Cure &Cure::operator=(const Cure &original)
{
	if (this != &original)
		this->type = original.type;
	return (*this);
};

Cure::~Cure()
{
	std::cout << "cure descrutor called" << std::endl;
}