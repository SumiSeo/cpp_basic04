#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"
# include "iostream"

class	ICharacter;
class Cure : public AMateria
{
  private:
	std::string type;

  public:
	Cure(void);
	~Cure();
	Cure(std::string const &type);
	Cure &operator=(const Cure &original);
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif