/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:46:59 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/03 22:02:08 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))
# define MAX(x,y) ((x > y) ? (x) : (y))
# define MIN(x,y) ((x < y) ? (x) : (y))

# include <iostream>
# include <cstdlib>


class ClapTrap {
    protected:
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
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &src);

		ClapTrap &operator=(ClapTrap const &src);

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void rangedAttack(std::string const &target) const;
		void meleeAttack(std::string const &target) const;

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
	std::string	random_string(const char *array[], size_t size);


#endif
