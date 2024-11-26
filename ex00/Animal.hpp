#ifndef Animal_HPP
# define Animal_HPP

# include "iostream"

class Animal
{
  private:
	/* data */
  protected:
	std::string type;

  public:
	Animal(/* args*/);
	Animal(const Animal &original);
	Animal &operator=(const Animal &original);
	~Animal();
	void makeSound(void);
	std::string getType(void);
};

#endif