#ifndef Ice_HPP
# define Ice_HPP

# include "AMateria.hpp"
# include "iostream"

class	ICharacter;
class Ice : public AMateria
{
  private:
	std::string type;

  public:
	Ice(void);
	~Ice();
	Ice(std::string const &type);
	Ice &operator=(const Ice &original);
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif