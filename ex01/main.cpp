#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    // Test default constructor
    ScavTrap scavDefault;
    std::cout << std::endl;

    // Test parameterized constructor
    ScavTrap scavNamed("Scavvy");
    std::cout << std::endl;

    // Test copy constructor
    ScavTrap scavCopy(scavNamed);
    std::cout << std::endl;

    // Test assignment operator
    ScavTrap scavAssigned;
    scavAssigned = scavNamed;
    std::cout << std::endl;

    // Test attack functionality
    scavNamed.attack("targetDummy");
    scavNamed.attack("anotherTarget");
    std::cout << std::endl;

    // Test takeDamage and beRepaired functionality
    scavNamed.takeDamage(30);
    scavNamed.beRepaired(20);
    scavNamed.takeDamage(90); // Test if it survives excessive damage
    scavNamed.beRepaired(10); // Shouldn't be able to repair if dead
    std::cout << std::endl;

    // Test guardGate functionality
    scavNamed.guardGate();
    std::cout << std::endl;

    // Test destructor chaining (happens at the end of scope)
    return 0;
}
