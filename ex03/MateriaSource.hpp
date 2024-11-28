
#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "Cure.hpp"
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "iostream"

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *inventory[4];

  public:
	MateriaSource(void);
	MateriaSource(AMateria *m);
	MateriaSource(const MateriaSource &original);
	MateriaSource &operator=(const MateriaSource &original);
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
	~MateriaSource();
};

#endif