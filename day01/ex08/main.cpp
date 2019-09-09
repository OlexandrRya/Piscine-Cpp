/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:20:19 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 19:32:47 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main() {
	Human humus;

	humus.action("meleeAttack", "Uber");
	humus.action("rangedAttack", "Google");
	humus.action("intimidatingShout", "Tesla");

	return 0;
}