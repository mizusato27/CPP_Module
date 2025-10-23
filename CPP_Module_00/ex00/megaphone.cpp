/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 03:51:25 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/23 20:50:34 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			std::string str = argv[i];
			for (int j = 0; str[j]; ++j)
				str[j] = std::toupper(str[j]);
			std::cout << str;
		}
	}
	std::cout << std::endl;
	return (0);
}
