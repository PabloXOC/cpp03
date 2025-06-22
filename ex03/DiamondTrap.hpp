#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string name; // DiamondTrap's private name attribute
public:
    // Constructors
    DiamondTrap();
    DiamondTrap(const std::string &name);
    DiamondTrap(const DiamondTrap &other);

    // Destructor
    ~DiamondTrap();

    // Assignment operator
    DiamondTrap &operator=(const DiamondTrap &other);

    // Override attack() from ScavTrap
    using	ScavTrap::attack;

    // Special capacity
    void whoAmI();
};

#endif
