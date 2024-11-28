#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	std::cout << "Character constructed" << std::endl;
};

Character::Character(const Character &obj)
{
	this->name = obj.name;
};
Character &Character::operator=(const Character &obj)
{
	if (this != &obj)
		this->name = obj.name;
	return (*this);
};
Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
	std::cout << "Character destructed" << std::endl;
};
std::string const &Character::getName() const
{
	return (this->name);
};
void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	int i;
	for (i = 0; i < 4 && inventory[i] != NULL; ++i)
	{
		if (inventory[i] == m)
		{
			std::cout << "Cannot equip the same instance of an object twice" << std::endl;
			return ;
		}
	}
	if (i == 4)
		std::cout << "no more inventroy" << std::endl;
	else
		inventory[i] = m;
};
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index" << std::endl;
	else if (inventory[idx] == NULL)
		std::cout << "no item hiere";
	else
	{
		std::cout << "no inventroy name" << std::endl;
		inventory[idx] = NULL;
	}
};
void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index" << std::endl;
	else if (inventory[idx] == NULL)
		std::cout << "no item here" << std::endl;
	inventory[idx]->use(target);
};
AMateria *Character::getInventory(int idx) const
{
	std::cout << "This->inventory " << this->inventory[idx] << std::endl;
	return (this->inventory[idx]);
};
