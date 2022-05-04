/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karisti- <karisti-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:22:59 by karisti-          #+#    #+#             */
/*   Updated: 2022/04/24 19:19:38 by karisti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	this->_fPointValue = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const & fixed)
{
	*this = fixed;
}

Fixed::Fixed(int const value)
{
	this->_fPointValue = roundf(value * (1 << this->_fractBits));
}

Fixed::Fixed(float const value)
{
	this->_fPointValue = roundf(value * (1 << this->_fractBits));
}

int		Fixed::getRawBits(void) const
{
	return (this->_fPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fPointValue / (float)(1 << this->_fractBits));
}

int		Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

std::ostream&	operator<<(std::ostream & o, Fixed const & fixed)
{
	o << fixed.toFloat();
	return (o);
}

Fixed&	Fixed::operator=(Fixed const & fixed)
{
	this->_fPointValue = fixed._fPointValue;
	return (*this);
}

bool	Fixed::operator>(Fixed const & fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed const & fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed const & fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed const & fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed const & fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed const & fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

Fixed	Fixed::operator+(Fixed const & fixed) const
{
	
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & fixed) const
{
	
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & fixed) const
{
	
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & fixed) const
{
	
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed&	Fixed::operator++()
{
	++this->_fPointValue;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed result = *this;
	++(*this);
	return (result);
}

Fixed&	Fixed::operator--()
{
	--this->_fPointValue;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed result = *this;
	--(*this);
	return (result);
}

Fixed&	Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const& Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed&	Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const& Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

