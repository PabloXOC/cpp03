#include "DiamondTrap.hpp"
#include <iostream>

// Default constructor
DiamondTrap::DiamondTrap()
    : ClapTrap("Default_DiamondTrap_clap_name"), FragTrap(), ScavTrap(), name("Default_DiamondTrap") {
    std::cout << "DiamondTrap " << name << " has been created!" << std::endl;
    this->attackDamage = 30;
    this->energyPoints = 50;
    this->hitPoints = 100;
}


// Parametrized constructor
DiamondTrap::DiamondTrap(const std::string &name)
    : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), name(name) {
    std::cout << "DiamondTrap " << this->name << " has been created!" << std::endl;
    this->attackDamage = 30;
    this->energyPoints = 50;
    this->hitPoints = 100;
}


// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name) {
    // Specify which base class you want to access ClapTrap's name
    FragTrap::name = other.FragTrap::name;
    std::cout << "DiamondTrap " << this->name << " has been copied!" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " has been destroyed!" << std::endl;
}

// Assignment operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
        // Specify which base class you want to access ClapTrap's name
        FragTrap::name = other.FragTrap::name;
    }
    std::cout << "DiamondTrap " << name << " has been assigned!" << std::endl;
    return *this;
}

// Special method to show the name of the DiamondTrap
void DiamondTrap::whoAmI() {
    std::cout << "I am " << name << ", and my ClapTrap name is " << FragTrap::name << "!" << std::endl;
}
