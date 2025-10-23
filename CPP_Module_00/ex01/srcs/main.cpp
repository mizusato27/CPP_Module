/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:43:17 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/23 18:34:08 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;
	Contact		newContact;
	std::string	command;
	// int			start = 0;
	// int			end = 0;

	(void)argv;
	if (argc != 1)
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}

	while (1)
	{
		phoneBook.displayInstruction();
		if (!(std::getline(std::cin, command)))
			phoneBook.exitPhoneBook();

		// while (start < (int)command.length() && isspace(command[start]))
		// 	start++;
		// if (start == (int)command.length())
		// 	command = "";
		// end = command.length() - 1;

		if (command == "EXIT")
			phoneBook.exitPhoneBook();
		else if (command == "ADD")
			phoneBook.addInformation(newContact);
		else if (command == "SEARCH")
			phoneBook.searchInformation();
	}
	return (0);
}
