/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mindopen.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:08:42 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:47:24 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

#include <stdint.h>
#include <stdio.h>
#include <queue>
#include "IInstruction.hpp"

class Mindopen
{
	public:
		Mindopen(void);
		Mindopen(Mindopen const &instance);
		Mindopen &operator=(Mindopen const &rhs);
		~Mindopen(void);
        bool	readFile(char *);
        void    execute(void);
		void    execute(char *, size_t &);
		void	fillQueue(std::queue<IInstruction*> &, std::stringstream &);


	private:
        char    					*_bytes;
		size_t						_bytesIndex;
		size_t						_strIndex;
		std::queue<IInstruction*>	_queue;

};

#endif