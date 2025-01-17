#include "ClapTrap.hpp"


ClapTrap::ClapTrap() :
name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):
name(other.name), hitPoints(other.hitPoints)
, energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name):
name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap name constructor called with name " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {

        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout <<"ClapTrap  destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return name;
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target
                  << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " has no energy points left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints < amount && this->hitPoints > 0)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;
    std::cout   << "ClapTrap " << this->name << " takes " << amount
                << " points of damage";
    if (this->hitPoints == 0)
        std::cout << " and is now out of hit points!" << std::endl;
    else
        std::cout << " and has " << this->hitPoints << " hit points left!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->hitPoints += amount;
        --this->energyPoints;
        std::cout << "ClapTrap " << this->name << " repairs itself, restoring "
                  << amount << " hit points. It now has " << this->hitPoints
                  << " hit points and " << this->energyPoints << " energy points left!" << std::endl;
    }
    else if (this->energyPoints > 0)
        std::cout << "ClapTrap " << this->name << " has no energy points left to repair!" << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " has no hit points left to repair!" << std::endl;

}