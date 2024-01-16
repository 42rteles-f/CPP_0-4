#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    steve("steve");
    ClapTrap    chris("chris");

    chris.attack("steve");
    steve.takeDamage(0);
    steve.attack("chris");
    chris.takeDamage(30);
    chris.beRepaired(10);
}