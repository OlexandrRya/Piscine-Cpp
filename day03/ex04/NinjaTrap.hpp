/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:46:03 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 21:22:30 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap(NinjaTrap const &inst);

		NinjaTrap &operator=(NinjaTrap const &inst);

		void ninjaShoebox(ClapTrap &obj);
		void ninjaShoebox(FragTrap &obj);
		void ninjaShoebox(ScavTrap &obj);
		void ninjaShoebox(NinjaTrap &obj);
};

#endif