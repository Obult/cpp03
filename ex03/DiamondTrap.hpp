#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class	DiamondTrap : virtual FragTrap, virtual ScavTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& ref);
	DiamondTrap& operator=(const DiamondTrap& ref);
	~DiamondTrap();
};

#endif
