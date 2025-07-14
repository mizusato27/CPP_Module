/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:56:15 by mizusato          #+#    #+#             */
/*   Updated: 2025/07/14 15:05:07 by mizusato         ###   ########.fr       */
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

class	Fixed
{
	private:
		int					_fixedPointValue;// 固定小数点数の値を格納する整数
		static const int	_fractionalBits;// 小数部のビット数（常に8）

	public:
		Fixed();// デフォルトコンストラクタ：固定小数点数の値を0に初期化
		Fixed(const Fixed& copy);// コピーコンストラクタ：他のFixedオブジェクトから新しいオブジェクトを作成
		~Fixed();
		Fixed& operator=(const Fixed& other);// コピー代入演算子のオーバーロード：既存のオブジェクトに他のオブジェクトの値をコピー

		int		getRawBits(void) const;// 固定小数点数の生の値を返すメンバ関数
		void	setRawBits(const int raw);// 固定小数点数の生の値を設定するメンバ関数
};

#endif
