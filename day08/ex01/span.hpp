/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 11:12:29 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/10 11:15:52 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
#include <iostream>

class Span
{
	private:
		std::vector<int>		_datas;
		unsigned int			_data_count;

	public:
		class					SpanFullException: public std::exception
		{
			public:
									SpanFullException(void);
									~SpanFullException(void) throw();
			char const				*what(void) const throw();
		};

								Span(unsigned int size);
								~Span(void);
								Span(Span const &src);
		Span					&operator=(Span const &rhs);

		void					addNumber(int number) throw(SpanFullException);
		void					addNumber(
									std::vector<int>::iterator it,
									std::vector<int>::iterator end
								) throw(SpanFullException);

		int						shortestSpan(void);
		int						longestSpan(void);
};

#endif
