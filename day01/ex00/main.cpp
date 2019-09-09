/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:24:01 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 13:28:27 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void ponyOnTheStack() {
	Pony pony("Scootaloo", "purple");
	pony.say_hi();
}

void ponyOnTheHeap() {
	Pony *pony = new Pony("Apple Bloom", "yellow");
	pony->say_hi();
	delete pony;
}

int	main() {
	ponyOnTheStack();
	ponyOnTheHeap();

	return 0;
}