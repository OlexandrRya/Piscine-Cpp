/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:02:01 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 22:06:45 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		SuperTrap(SuperTrap const &src);

		SuperTrap &operator=(SuperTrap const &inst);

		void rangedAttack(std::string const &target) const;
		void meleeAttack(std::string const &target) const;
};

#endif
