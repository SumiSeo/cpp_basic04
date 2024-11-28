#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	std::cout << "Materia source constructor called" << std::endl;
};
MateriaSource::MateriaSource(const MateriaSource &original)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	*this = original;
	std::cout << "Materia source copy constructor called" << std::endl;
};
MateriaSource &MateriaSource::operator=(const MateriaSource &original)
{
	for (int i = 0; i < 4; ++i)
	{
		delete inventory[i];
		inventory[i] = NULL;
		if (original.inventory[i])
			inventory[i] = original.inventory[i]->clone();
	}
	std::cout << "Materia source assignment operator called" << std::endl;
	return (*this);
};
MateriaSource::~MateriaSource()
{
	std::cout << "Materia source destructor called" << std::endl;
};
// virtual functions
void MateriaSource::learnMateria(AMateria *m)
{
	if (m == NULL)
	{
		std::cout << "no materia" << std::endl;
		return ;
	}
	int i;
	for (i = 0; i < 4 && inventory[i] != NULL; ++i)
		;
	if (i == 4)
		std::cout << "no more invenetory" << std::endl;
	else
		inventory[i] = m;
};

AMateria *MateriaSource::createMateria(std::string const &type)
{
	std::cout << "Create materia called" << std::endl;
	if (type == "ice")
		return (new Ice());
	if (type == "cure")
		return (new Cure());
	else
		return (NULL);
};
