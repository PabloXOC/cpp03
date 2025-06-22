#include "DiamondTrap.hpp"

int main() {
    // Test default constructor
    DiamondTrap diamondDefault;
    std::cout << std::endl;

    // Test parameterized constructor
    DiamondTrap diamondNamed("Shiny");
    std::cout << std::endl;

    // Test copy constructor
    DiamondTrap diamondCopy(diamondNamed);
    std::cout << std::endl;

    // Test assignment operator
    DiamondTrap diamondAssigned;
    diamondAssigned = diamondNamed;
    std::cout << std::endl;

    // Test attack functionality
    diamondNamed.attack("testTarget");
    std::cout << std::endl;

    // Test whoAmI functionality
    diamondNamed.whoAmI();
    std::cout << std::endl;

    return 0;
}
