#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->i = 0;
	std::cout << "Materia source constructor called" << std::endl;
};
MateriaSource::MateriaSource(const MateriaSource &original)
{
	this->i = original.i;
	std::cout << "Materia source copy constructor called" << std::endl;
};
MateriaSource &MateriaSource::operator=(const MateriaSource &original)
{
	if (this != &original)
		this->i = original.i;
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
	(void)Materias;
	i++;
	std::cout << "CCCC" << m->getType() << std::endl;
};

AMateria *MateriaSource::createMateria(std::string const &type)
{
	std::cout << "Create materia called" << std::endl;
	if (type == "ice")
	{
		std::cout << "ice type" << std::endl;
		return (new Ice());
	}
	if (type == "cure")
	{
		std::cout << "cure type" << std::endl;
		return (new Cure());
	}
	else
		return (NULL);
};
