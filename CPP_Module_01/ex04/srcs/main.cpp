/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 11:17:05 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/19 15:24:32 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int		main(int argc, char **argv)
{
	checkArgs(argc);

	const std::string	file = argv[1];
	const std::string	s1 = argv[2];
	const std::string	s2 = argv[3];

	if (s1.empty())
		errorExit(ERR_EMPTY_STR);

	Replacer	replacer(file, s1, s2);

	replacer.replaceFile();

	return (EXIT_SUCCESS);
}
