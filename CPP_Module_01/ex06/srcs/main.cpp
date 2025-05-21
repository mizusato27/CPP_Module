/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:04:53 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/21 18:47:24 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << ERR_ARGS << std::endl;
		return (EXIT_FAILURE);
	}

	Harl	harl;

	harl.complain(argv[1]);
	return (EXIT_SUCCESS);
}
