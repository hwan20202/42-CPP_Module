#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
    return (_type);
} // return value is const, so that cannot be changed

void    Weapon::setType(std::string type)
{
    _type = type;
}


Weapon::Weapon(void)
{
    
}
Weapon::Weapon(std::string type)
{
    _type = type;
}
Weapon::~Weapon(void)
{

}