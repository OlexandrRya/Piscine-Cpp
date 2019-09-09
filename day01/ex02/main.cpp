/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:10:42 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 14:16:15 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void) {
	srand(time(NULL));

	ZombieEvent runnerEvent("Walking");

	Zombie *z1 = runnerEvent.newZombie("Bowel Powell");
	z1->announce();
	Zombie *z2 = runnerEvent.newZombie("Mitch Hedberg");
	z2->announce();
	Zombie *z3 = runnerEvent.randomChump();

    delete z1;
	delete z2;
	delete z3;
	
    ZombieEvent ghoulEvent("Runners");

	Zombie *z4 = ghoulEvent.randomChump();
	Zombie *z5 = ghoulEvent.randomChump();

	
	delete z4;
	delete z5;

	return 0;
}