#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("Clappy");
    ClapTrap clapper;

    clap.attack("Target");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clapper.attack("other target");
    return 0;
}