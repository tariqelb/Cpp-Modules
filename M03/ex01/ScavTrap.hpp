#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void	guardGate(void);

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& rhs);
	ScavTrap&	operator=(const ScavTrap& rhs);
	~ScavTrap();
};

#endif
