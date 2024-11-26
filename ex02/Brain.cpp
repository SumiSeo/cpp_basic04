#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; ++i)
		ideas[i] = "Default idea";
	std::cout << "Brain constructor called" << std::endl;
};
Brain::Brain(const Brain &original)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = original.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
};
Brain &Brain::operator=(const Brain &original)
{
	if (this != &original)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = original.ideas[i];
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
};

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
};