#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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

    // Test FragTrap default constructor
    FragTrap fragDefault;
    std::cout << std::endl;

    // Test FragTrap parameterized constructor
    FragTrap fragNamed("Fraggy");
    std::cout << std::endl;

    // Test FragTrap copy constructor
    FragTrap fragCopy(fragNamed);
    std::cout << std::endl;

    // Test FragTrap assignment operator
    FragTrap fragAssigned;
    fragAssigned = fragNamed;
    std::cout << std::endl;

    // Test FragTrap attack functionality
    fragAssigned.attack("testTarget");
    fragAssigned.attack("anotherTestTarget");
    std::cout << std::endl;

    // Test FragTrap takeDamage and beRepaired functionality
    fragNamed.takeDamage(40);
    fragNamed.beRepaired(30);
    fragNamed.takeDamage(150); // Test if it survives excessive damage
    fragNamed.beRepaired(50); // Shouldn't be able to repair if dead
    std::cout << std::endl;

    // Test FragTrap highFivesGuys functionality
    fragNamed.highFivesGuys();
    std::cout << std::endl;

    // Test destructor chaining (happens at the end of scope)
    return 0;
}
