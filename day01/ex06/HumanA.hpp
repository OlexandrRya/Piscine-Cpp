/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:24:18 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 18:24:23 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class HumanA {
    private:
		Weapon& _weapon;
		std::string _name;

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void attack() const;

};

#endif
