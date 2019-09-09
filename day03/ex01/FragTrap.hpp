/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:28:34 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 12:32:30 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cstdlib>

class FragTrap {
    private:
		std::string _name;
        int _level;
		int _meleeDamage;
		int _rangedDamage;
		int _armor;
		int _HP;
		int _maxHP;
		int _energyPoints;
		int _maxEnergyPoints;
		
        
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap const &inst);

		FragTrap &operator=(FragTrap const &inst);

		void beRepaired(unsigned int amount);
		void rangedAttack(std::string const &target) const;
		void meleeAttack(std::string const &target) const;
		void vaulthunter_dot_exe(std::string const &target);
		void takeDamage(unsigned int amount);

		std::string getName() const;
		unsigned int getHP() const;
		unsigned int getMaxHP() const;
		unsigned int getEnergyPoints() const;
		unsigned int getMaxEnergyPoints() const;
		unsigned int getLevel() const;
		unsigned int getMeleeDamage() const;
		unsigned int getRangedDamage() const;
		unsigned int getArmor() const;
};

#endif