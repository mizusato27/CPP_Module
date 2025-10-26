/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 01:14:18 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/26 14:41:56 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// static constメンバ変数の初期化
const int	Fixed::_fractionalBits = 8;

// デフォルトコンストラクタ
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << DEFAULT_CONSTRUCTOR_MSG << std::endl;
}

// イントコンストラクタ
Fixed::Fixed(const int input)
{
	std::cout << INT_CONSTRUCTOR_MSG << std::endl;

	_fixedPointValue = input << _fractionalBits;
}

// フロートコンストラクタ
Fixed::Fixed(const float input)
{
	std::cout << FLOAT_CONSTRUCTOR_MSG << std::endl;

	_fixedPointValue = roundf(input * (1 << _fractionalBits));
}

// コピーコンストラクタ
Fixed::Fixed(const Fixed &copy) : _fixedPointValue(copy._fixedPointValue)
{
	std::cout << COPY_CONSTRUCTOR_MSG << std::endl;
}

// コピー代入演算子
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << COPY_ASSIGNMENT_MSG << std::endl;

	if (this != &other)
		this->_fixedPointValue = other._fixedPointValue;
	return (*this);
}

// デストラクタ
Fixed::~Fixed()
{
	std::cout << DESTRUCTOR_MSG << std::endl;
}

// メンバ関数
int		Fixed::getRawBits(void) const
{
	std::cout << GETRAWBITS_MSG << std::endl;

	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << SETRAWBITS_MSG << std::endl;

	this->_fixedPointValue = raw;
}

// 固定小数点数からfloatへの変換
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixedPointValue) / (1 << _fractionalBits));
}

// 固定小数点数からintへの変換
int		Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}
