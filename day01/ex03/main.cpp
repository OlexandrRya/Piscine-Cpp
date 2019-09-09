/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:28:39 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 16:21:15 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void) {
	srand(time(NULL));

	ZombieHorde zombieHorde(10);
	zombieHorde.announce();

	return 0;
}