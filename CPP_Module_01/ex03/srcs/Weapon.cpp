/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:11:17 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/23 21:00:41 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const& weapon) : _type(weapon)
{
}

Weapon::~Weapon(void)
{
}

const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string const& newType)
{
	this->_type = newType;
}
