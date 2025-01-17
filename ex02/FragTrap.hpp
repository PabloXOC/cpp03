#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    // Default constructor
    FragTrap();

    // Constructor with name
    FragTrap(const std::string &name);

    // Copy constructor
    FragTrap(const FragTrap &other);

    // Destructor
    ~FragTrap();

    // Copy assignment operator
    FragTrap &operator=(const FragTrap &other);

    // Attack method (overrides ClapTrap's attack)
    void attack(const std::string& target);

    // Special capacity
    void highFivesGuys(void);
};

#endif
