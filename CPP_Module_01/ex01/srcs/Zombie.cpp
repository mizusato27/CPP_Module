/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:35:59 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/14 19:32:12 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("unnamed")
{
	std::cout << "Zombie " << this->_name << " is created." << std::endl;
}

Zombie::Zombie(std::string s) : _name(s)
{
	std::cout << "Zombie " << this->_name << " is created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is destroyed." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string s)
{
	this->_name = s;
}
