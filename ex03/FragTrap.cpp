#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap("DefaultFrag") {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap default constructor called for " << this->name << std::endl;
}

// Constructor with name
FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap constructor with name called for " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called for " << this->name << std::endl;
}

// Copy assignment operator
FragTrap &FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        std::cout << "FragTrap copy assignment operator called for " << this->name << std::endl;
    }
    return *this;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << this->name << std::endl;
}

// Override attack method
void FragTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 && this->hitPoints > 0) {
        this->energyPoints--;
        std::cout << "FragTrap " << this->name << " attacks " << target
                  << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << this->name << " is unable to attack due to lack of energy or hit points." << std::endl;
    }
}

// Guard Gate method
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->name << " is requesting high fives from everyone! ✋" << std::endl;
}