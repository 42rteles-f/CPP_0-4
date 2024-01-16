#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ScavTrap    steve("steve");
    ClapTrap    carlos("carlos");
    DiamondTrap    dante("dante");

    dante.whoAmI();
    dante.highFivesGuys();
    dante.guardGate();
    dante.attack("steve");
    steve.takeDamage(30);
    dante.beRepaired(10);
    carlos.attack("dante");
    dante.takeDamage(0);
    steve.attack("carlos");
    carlos.takeDamage(20);
    carlos.beRepaired(10);
}