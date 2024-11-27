
#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "Cure.hpp"
# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "iostream"

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *Materias[4];
	int i;

  protected:
  public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &original);
	MateriaSource &operator=(const MateriaSource &original);
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
	~MateriaSource();
};

#endif