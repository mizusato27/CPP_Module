/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:22:46 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/16 16:35:05 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with their "
			<< this->_weapon->getType() <<std::endl;
	}
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
