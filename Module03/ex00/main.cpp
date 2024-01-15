#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapper("clapper");
	ClapTrap	nobody;

	clapper.attack("nobody");
	// nobody.takeDamage(11);
	nobody.beRepaired(1);
	nobody.attack("clapper");
	clapper.beRepaired(1);
}