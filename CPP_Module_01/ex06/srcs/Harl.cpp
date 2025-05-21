/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:32:00 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/21 19:04:20 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG_MSG << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO_MSG << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING_MSG << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR_MSG << std::endl;
}

int		Harl::getLevel(std::string const& level)
{
	std::string	levels[NBR_LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < NBR_LEVELS; i++)
	{
		if (levels[i] == level)
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string const& level)
{
	int		index = this->getLevel(level);

	switch(index)
	{
		case 0:
			this->debug();
			// intentional fallthrough
		case 1:
			this->info();
			// intentional fallthrough
		case 2:
			this->warning();
			// intentional fallthrough
		case 3:
			this->error();
			break ;
		default:
			std::cout << INVALID_MSG <<std::endl;
			break ;
	}
}
