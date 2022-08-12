#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <ClapTrap.hpp>

class	ScavTrap : virtual ClapTrap 
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ref);
	ScavTrap& operator=(const ScavTrap& ref);
	~ScavTrap();
	void	guardGate();
};

#endif
