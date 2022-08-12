#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <ClapTrap.hpp>

class	FragTrap : virtual ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& ref);
	FragTrap& operator=(const FragTrap& ref);
	~FragTrap();

	void	highFiveGuys(void);
};

#endif
