#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"
# include "iostream"

class WrongCat : public WrongAnimal
{
  public:
	WrongCat(void);
	WrongCat(const WrongCat &original);
	WrongCat &operator=(const WrongCat &original);
	void makeSound(void) const;
	~WrongCat();
};

#endif