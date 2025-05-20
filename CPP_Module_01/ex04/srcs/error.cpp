/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 11:31:04 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/20 11:18:51 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

void	errorExit(std::string const& msg)
{
	std::cerr << msg << std::endl;
	exit(EXIT_FAILURE);
}

void	checkArgs(const int argc)
{
	if (argc == 4)
		return ;
	errorExit(ERR_ARGS);
}
