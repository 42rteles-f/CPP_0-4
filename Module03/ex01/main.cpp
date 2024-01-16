#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    steve("steve");
    ClapTrap    chris("chris");
    ScavTrap    steve2;

    chris.attack("steve");
    steve.takeDamage(0);
    steve.attack("chris");
    chris.takeDamage(20);
    chris.beRepaired(10);
}