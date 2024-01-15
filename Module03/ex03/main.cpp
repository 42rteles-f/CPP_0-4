#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    steve("steve");
    ClapTrap    chris("chris");

    steve.attack("chris");
}