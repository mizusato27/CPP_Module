/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:56:04 by mizusato          #+#    #+#             */
/*   Updated: 2025/07/14 15:04:55 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// デフォルトコンストラクタ：固定小数点数を0に初期化
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << DEFAULT_CONSTRUCTOR_MSG << std::endl;
}

// コピーコンストラクタ：他のFixedオブジェクトをコピーして新しいオブジェクトを作成
Fixed::Fixed(const Fixed& copy) : _fixedPointValue(copy._fixedPointValue)
{
	std::cout << COPY_CONSTRUCTOR_MSG << std::endl;
}

// コピー代入演算子：既存のオブジェクトに他のオブジェクトの値を代入
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << COPY_ASSIGNMENT_MSG << std::endl;

	if (this != &other)
		this->_fixedPointValue = other._fixedPointValue;
	return (*this);
}

// デストラクタ：オブジェクトが破棄される際のクリーンアップ
Fixed::~Fixed()
{
	std::cout << DESTRUCTOR_MSG << std::endl;
}

// 固定小数点数の生の値（内部表現）を取得
int		Fixed::getRawBits(void) const
{
	std::cout << GETRAWBITS_MSG << std::endl;

	return (this->_fixedPointValue);
}

// 固定小数点数の生の値（内部表現）を設定
void	Fixed::setRawBits(const int raw)
{
	this->_fixedPointValue = raw;
}
