#ifndef __Dog_HPP__
# define __Dog_HPP__

# include "Animal.hpp"

class Dog : public Animal
{
  public:
	Dog(void);
	Dog(const Dog &original);
	Dog &operator=(const Dog &original);
	void makeSound(void) const;
	~Dog();
};

#endif /*__DOG_HPP */