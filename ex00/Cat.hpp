#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
class Cat : public Animal
{
  public:
	Cat(void);
	Cat(const Cat &original);
	Cat &operator=(const Cat &original);
    void makeSound(void) const;
	~Cat();
};

#endif