#include "Victim.hpp"

Victim::Victim(void)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &instance)
{
	*this = instance;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim &	Victim::operator=(Victim const &rhs)
{
	this->_name = rhs._name;
	return *this;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

std::string	Victim::getName(void) const
{
	return this->_name;
}

void		Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}


void	Victim::setName(std::string name)
{
	this->_name = name;
}

std::ostream&	operator<<(std::ostream &o, Victim const &instance)
{
	std::cout << "Im " << instance.getName() << " and I like otters !" << std::endl;
	return o;
}