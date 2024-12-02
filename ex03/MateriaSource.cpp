#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
};
MateriaSource::MateriaSource(const MateriaSource &original)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	*this = original;
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
	return (*this);
};
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
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
	if (type == "ice")
		return (new Ice());
	if (type == "cure")
		return (new Cure());
	else
		return (NULL);
};
