/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 10:57:28 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/10 11:04:35 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>typename T::iterator easyfind(T &container, int data) {
	typename T::iterator	it = container.begin();
	typename T::iterator	it_end = container.end();

	while (it != it_end)	{
		if (*it == data)
			return (it);
		++it;
	}
	return (it_end);
}
