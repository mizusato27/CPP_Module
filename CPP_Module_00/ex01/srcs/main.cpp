/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:43:17 by mizusato          #+#    #+#             */
/*   Updated: 2025/03/26 21:57:57 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	Contact		newContact;
	std::string	command;

	while (1)
	{
		phoneBook.displayInstruction();
		if (!(std::getline(std::cin, command)) || command == "EXIT")
			phoneBook.exitPhoneBook();
		else if (command == "ADD")
			phoneBook.addInformation(newContact);
		else if (command == "SEARCH")
			phoneBook.searchInformation();
	}
	return (0);
}
