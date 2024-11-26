#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include "Animal.hpp"
# include "iostream"

class WrongAnimal
{
  protected:
	std::string type;

  public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &original);
	WrongAnimal &operator=(const WrongAnimal &original);
	virtual void makeSound(void) const;
	virtual ~WrongAnimal(void);
};

#endif