#include <iostream>
#include "Character.hpp"

Character::Character()
{
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string name)
{
	std::cout << "Overload Character constructor called" << std::endl;
	this->name = name;
}

Character::Character(const Character& rhs)
{
	std::cout << "Copy Character constructor called" << std::endl;
	*this = rhs;
}

Character&	Character::operator=(const Character& rhs)
{
	std::cout << "Copy assignment Character operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Destructor of Character called" << std::endl;
}

const std::string &	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	std::cout << "Equip called" << std::endl;
}

void	Character::unequip(int idx)
{
	std::cout << "Unequip called" << std::cout;
}

void	Character::use(int idx, ICharacter& target)
{
	std::cout << "target" << " called" << std::endl;
}
