#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    // Default constructor
    ScavTrap();

    // Constructor with name
    ScavTrap(const std::string &name);

    // Copy constructor
    ScavTrap(const ScavTrap &other);

    // Destructor
    ~ScavTrap();

    // Copy assignment operator
    ScavTrap &operator=(const ScavTrap &other);

    // Attack method (overrides ClapTrap's attack)
    void attack(const std::string& target);

    // Special capacity
    void guardGate();
};

#endif
