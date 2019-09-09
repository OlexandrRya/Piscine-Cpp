/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:15:29 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 18:16:31 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <cstdlib>

class ScavTrap {
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
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap &operator=(ScavTrap const &src);

        std::string getName() const;
		unsigned int getHP() const;
		unsigned int getMaxHP() const;
        unsigned int getLevel() const;
		unsigned int getMeleeDamage() const;
		unsigned int getMaxEnergyPoints() const;
		unsigned int getRangedDamage() const;
		unsigned int getArmor() const;
		unsigned int getEnergyPoints() const;

		void beRepaired(unsigned int amount);
		void takeDamage(unsigned int amount);
		void meleeAttack(std::string const &target) const;
		void rangedAttack(std::string const &target) const;
		void challengeNewcomer(std::string const &newcomer);
};

#endif