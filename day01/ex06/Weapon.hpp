/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:48:03 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 17:57:12 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>


class Weapon {
	private:
		std::string _type;

    public:
		Weapon(std::string str);
		~Weapon();

		void                setType(std::string str);
		const std::string&  getType() const;
};

#endif
