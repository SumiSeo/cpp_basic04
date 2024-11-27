#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	this->i = 0;
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
	std::cout << "Character destructed" << std::endl;
};
std::string const &Character::getName() const
{
	return (this->name);
};
void Character::equip(AMateria *m)
{
	std::cout << "TYPE " << m->getType() << std::endl;
	inventory[this->i] = m;
	this->i++;
};
void Character::unequip(int idx)
{
	(void)idx;
};
void Character::use(int idx, ICharacter &target)
{
	(void)idx;
	(void)target;
	std::string ice = "ice";
	AMateria *mat = getInventory(idx);

	if (mat->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};
AMateria *Character::getInventory(int idx) const
{
	std::cout << "This->inventory " << this->inventory[idx] << std::endl;
	return (this->inventory[idx]);
};
