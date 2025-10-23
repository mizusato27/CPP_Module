/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:43:17 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/23 19:09:12 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;
	Contact		newContact;
	std::string	command;
	int			start = 0;
	int			end = 0;

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

		while (start < (int)command.length() && isspace(command[start]))
			start++;
		if (start == (int)command.length())
			command = "";
		else
		{
			end = command.length() - 1;
			while (end >= 0 && isspace(command[end]))
				end--;
			command = command.substr(start, end - start + 1);
		}
		start = 0;
		end = 0;

		if (command == "EXIT")
			phoneBook.exitPhoneBook();
		else if (command == "ADD")
			phoneBook.addInformation(newContact);
		else if (command == "SEARCH")
			phoneBook.searchInformation();
	}
	return (0);
}
