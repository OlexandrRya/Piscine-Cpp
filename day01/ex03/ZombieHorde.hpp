/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:34:44 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 16:32:10 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP


# include "Zombie.hpp"
# include <cstdlib>

class ZombieHorde {
	private:
		Zombie      *_zombies;
		int         _numZombies;
        
	public:
		ZombieHorde(int numZombies);
		~ZombieHorde();

		void announce() const;
        std::string getRandomZombieName();
};

#endif
