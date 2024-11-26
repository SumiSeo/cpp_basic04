#ifndef Brain_HPP
# define Brain_HPP

# include "iostream"
class Brain
{
  private:
	std::string ideas[100];

  public:
	Brain(void);
	Brain(const Brain &original);
	Brain &operator=(const Brain &original);
	~Brain();
};

#endif