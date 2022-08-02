#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <ClapTrap>

class	ScavTrap : public ClapTrap 
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap& ref);
	ScavTrap& operator=(const ScavTrap& ref);
	~ScavTrap();
};

#endif
