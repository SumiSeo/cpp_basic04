#ifndef Animal_HPP
# define Animal_HPP

# include "Brain.hpp"
# include "iostream"

class Animal
{
  protected:
	std::string type;

  public:
	Animal(void);
	Animal(const Animal &original);
	Animal &operator=(const Animal &original);
	virtual ~Animal(void);
	virtual void makeSound(void) const;
	std::string getType(void) const;
};

#endif