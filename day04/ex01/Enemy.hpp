/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:05:39 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/05 13:19:12 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>

class Enemy
{
    protected:
        int               _hp;
        std::string       _type;

    public:
        Enemy(void);
        Enemy(const Enemy &src);
        Enemy(int hp, const std::string &type);

        virtual           ~Enemy(void);

        Enemy             &operator= (const Enemy &rhs);

        int               getHP(void) const;
        const std::string getType(void) const;

        virtual void      takeDamage(int damage);
};

#endif
