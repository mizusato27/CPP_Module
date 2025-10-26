/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 01:13:52 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/26 14:42:12 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// static constメンバ変数の初期化
const int	Fixed::_fractionalBits = 8;

// デフォルトコンストラクタ
Fixed::Fixed() : _fixedPointValue(0)
{
	// std::cout << DEFAULT_CONSTRUCTOR_MSG << std::endl;
}

// イントコンストラクタ
Fixed::Fixed(const int input)
{
	// std::cout << INT_CONSTRUCTOR_MSG << std::endl;

	_fixedPointValue = input << _fractionalBits;
}

// フロートコンストラクタ
Fixed::Fixed(const float input)
{
	// std::cout << FLOAT_CONSTRUCTOR_MSG << std::endl;

	_fixedPointValue = roundf(input * (1 << _fractionalBits));
}

// コピーコンストラクタ
Fixed::Fixed(const Fixed &copy) : _fixedPointValue(copy._fixedPointValue)
{
	// std::cout << COPY_CONSTRUCTOR_MSG << std::endl;
}

// コピー代入演算子
Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << COPY_ASSIGNMENT_MSG << std::endl;

	if (this != &other)
		this->_fixedPointValue = other._fixedPointValue;
	return (*this);
}

// デストラクタ
Fixed::~Fixed()
{
	// std::cout << DESTRUCTOR_MSG << std::endl;
}

// ============================================================================

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_fixedPointValue > other.getRawBits());
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_fixedPointValue < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_fixedPointValue >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_fixedPointValue <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_fixedPointValue == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_fixedPointValue != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(this->_fixedPointValue + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits(this->_fixedPointValue - other.getRawBits());
	return (result);
}
#include <cstdio>
Fixed	Fixed::operator*(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits((this->_fixedPointValue * other.getRawBits()) >> _fractionalBits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed	result;

	result.setRawBits((this->_fixedPointValue << _fractionalBits) / other.getRawBits());
	return (result);
}

Fixed	&Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_fixedPointValue++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_fixedPointValue--;
	return (tmp);
}

// ============================================================================

// メンバ関数
int		Fixed::getRawBits(void) const
{
	// std::cout << GETRAWBITS_MSG << std::endl;

	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(const int raw)
{
	// std::cout << SETRAWBITS_MSG << std::endl;

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

// ============================================================================

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
