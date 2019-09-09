/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:28:34 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 18:17:31 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap const &inst);

		FragTrap &operator=(FragTrap const &inst);

		void vaulthunter_dot_exe(std::string const &target);
};

#endif
