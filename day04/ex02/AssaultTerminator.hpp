#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
        AssaultTerminator(void);
        AssaultTerminator(AssaultTerminator const &instance);
		AssaultTerminator &operator=(AssaultTerminator const &rhs);
		virtual                 ~AssaultTerminator(void);
        virtual ISpaceMarine*   clone() const;
        virtual void            battleCry() const;
        virtual void            rangedAttack() const;
        virtual void            meleeAttack() const;

	private:

};

#endif