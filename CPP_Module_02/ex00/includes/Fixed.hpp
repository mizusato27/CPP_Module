/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:56:15 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/05 15:58:38 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define DEFAULT_CONSTRUCTOR_MSG "Default Constructor called"
# define COPY_CONSTRUCTOR_MSG "Copy constructor called"
# define COPY_ASSIGNMENT_MSG "Copy assignment operator called"
# define DESTRUCTOR_MSG "Destructor called"
# define GETRAWBITS_MSG "getRawBits member function called"
# define SETRAWBITS_MSG "setRawBits member function called"

class	Fixed
{
	private:
		int					_fixedPointValue;// 固定小数点数の値を格納する整数
		static const int	_fractionalBits;// 小数部のビット数（常に8）

	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &other);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
