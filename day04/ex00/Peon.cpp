#include "Peon.hpp"

Peon::Peon(void)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &instance)
{
    *this = instance;
    std::cout << "Zog zog." << std::endl;
}

Peon &	Peon::operator=(Peon const &rhs)
{
	this->_name = rhs._name;
    return *this;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream&	operator<<(std::ostream &o, Peon const &instance)
{
	std::cout << "Im " << instance.getName() << " and I like otters !" << std::endl;
	return o;
}

void		Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}