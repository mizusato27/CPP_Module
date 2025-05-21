/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 14:54:12 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/21 15:18:13 by mizusato         ###   ########.fr       */
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
	std::cout << DEBUG_MSG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO_MSG << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING_MSG << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR_MSG << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[NBR_LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*funcPTR[NBR_LEVELS])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < NBR_LEVELS; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcPTR[i])();
			return ;
		}
	}
}
