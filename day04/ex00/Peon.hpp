#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(Peon const &instance);
		Peon &operator=(Peon const &rhs);
		~Peon(void);
        
        virtual void    getPolymorphed(void) const;
	private:
		Peon(void);
};

std::ostream&   operator<<(std::ostream &o, Peon const &instance);

#endif