#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap("DefaultScav") {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called for " << this->name << std::endl;
}

// Constructor with name
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap constructor with name called for " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called for " << this->name << std::endl;
}

// Copy assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        std::cout << "ScavTrap copy assignment operator called for " << this->name << std::endl;
    }
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << this->name << std::endl;
}

// Override attack method
void ScavTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        this->energyPoints--;
        std::cout << "ScavTrap " << this->name << " attacks " << target
                  << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->name << " is unable to attack due to lack of energy or hit points." << std::endl;
    }
}

// Guard Gate method
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " has entered Gate Keeper mode!" << std::endl;
}
