#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

// # define DEFAULT_CONSTRUCTOR_MSG "Default Constructor called"
// # define INT_CONSTRUCTOR_MSG "Int constructor called"
// # define FLOAT_CONSTRUCTOR_MSG "Float constructor called"
// # define COPY_CONSTRUCTOR_MSG "Copy constructor called"
// # define COPY_ASSIGNMENT_MSG "Copy assignment operator called"
// # define DESTRUCTOR_MSG "Destructor called"
// # define GETRAWBITS_MSG "getRawBits member function called"
// # define SETRAWBITS_MSG "setRawBits member function called"

class	Fixed
{
	private:
		int					_fixedPointValue;// 固定小数点数の値を格納する整数
		static const int	_fractionalBits;// 小数部のビット数（常に8）

	public:
		// コンストラクタ
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed &copy);

		// デストラクタ
		~Fixed();

		// コピー代入演算子
		Fixed	&operator=(const Fixed &other);

		// 追加演算子
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		// メンバ関数
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// 追加静的メンバ関数
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
