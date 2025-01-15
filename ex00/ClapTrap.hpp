#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
public:
    //Default
	ClapTrap();

	//Copy constructor
	ClapTrap(const ClapTrap &other);

	//name constructor
	ClapTrap(const std::string &name);

    // Copy assignment operator
	ClapTrap &operator=(const ClapTrap &other);

	//Destructor
	~ClapTrap();

    //getters
    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;

    //Attack
    void attack(const std::string& target);
    //Take Damage
    void takeDamage(unsigned int amount);
    //Be repaired
    void beRepaired(unsigned int amount);
};

#endif