#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
class Cat : public Animal
{
  private:
	/* data */
  protected:
	/* data */
  public:
	Cat(/* args*/);
	Cat(const Cat &original);
	Cat &operator=(const Cat &original);
	~Cat();
};

#endif