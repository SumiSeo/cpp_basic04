#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class Dog : public Animal
{
  private:
	/* data */
  public:
	Dog(/* args*/);
	Dog(const Dog &original);
	Dog &operator=(const Dog &original);
	~Dog();
};

#endif "