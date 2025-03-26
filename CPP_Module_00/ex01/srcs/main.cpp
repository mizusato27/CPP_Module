/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:43:17 by mizusato          #+#    #+#             */
/*   Updated: 2025/03/26 20:55:11 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	printPhoneBook(const PhoneBook &phoneBook)
{
	for (int i; i < 5; i++)
	{
		std::cout << phoneBook._contacts[i]._firstName << std::endl;
	}
}

void	exitPhoneBook(void)
{
	std::cout << std::endl << "Exit PhoneBook" << std::endl;
	exit(1);
}

std::string	getValidInput(const std::string &prompt)
{
	std::string	input;

	while (1)
	{
		std::cout << prompt << ": ";
		if (!(std::getline(std::cin, input)))
			exitPhoneBook();
		if (!input.empty())
			return (input);
	}
}

int	main(void)
{
	PhoneBook	phoneBook;
	Contact		newContact;
	std::string	command;

	while (1)
	{
		phoneBook.displayInstruction();
		printPhoneBook(phoneBook);// 確認用
		if (!(std::getline(std::cin, command)) || command == "EXIT")
			exitPhoneBook();
		else if (command == "ADD")
		{
			newContact.getFirstName(getValidInput("First Name"));
			newContact.getLastName(getValidInput("Last Name"));
			newContact.getNickname(getValidInput("Nickname"));
			newContact.getPhoneNumber(getValidInput("Phone Number"));
			newContact.getDarkestSecret(getValidInput("Darkest Secret"));
			phoneBook.addInformation(newContact);
		}
		else if (command == "SEARCH")
			phoneBook.searchInformation();
	}
	return (0);
}
