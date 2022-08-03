#include <ScavTrap.hpp>

#include <string>
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "nameless ScavTrap created" << std::endl;
    _hp = 100;
    _energy = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Scav " << name << std::endl;
    _hp = 100;
    _energy = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref)
{
    *this = ref;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
    ClapTrap::operator=(ref);
	return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scav destruction" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}
