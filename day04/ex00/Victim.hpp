#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	public:
		Victim(std::string name);
		Victim(Victim const &instance);
		Victim &operator=(Victim const &rhs);
		virtual	~Victim(void);

        virtual void    getPolymorphed(void) const;
        std::string 	getName(void) const;
		void			setName(std::string name);
        
	private:

	protected:
		Victim(void);
        std::string _name;
};

std::ostream&   operator<<(std::ostream &o, Victim const &instance);

#endif