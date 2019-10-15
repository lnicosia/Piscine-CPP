/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:26:20 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 17:26:22 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:
        virtual                 ~ISpaceMarine() {}
        virtual ISpaceMarine*   clone() const = 0;
        virtual void            battleCry() const = 0;
        virtual void            rangedAttack() const = 0;
        virtual void            meleeAttack() const = 0;

	private:

};

#endif