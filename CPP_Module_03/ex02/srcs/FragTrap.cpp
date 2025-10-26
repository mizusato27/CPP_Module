/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:43:48 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/26 14:22:51 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap parameterized constructor called for " << this->_name << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->_name << "." << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " cannot attack (no hit points left)." << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " cannot attack (no energy points left)." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " attacks " << target
			  << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is requesting a high five!" << std::endl;
}
