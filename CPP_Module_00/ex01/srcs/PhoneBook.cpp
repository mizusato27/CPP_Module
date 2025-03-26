#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0), _count(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::displayInstruction(void)
{
	std::cout << "Available commands:[ADD, SEARCH, EXIT]" << std::endl;
	std::cout << "$> ";
}

void	PhoneBook::exitPhoneBook(void)
{
	std::cout << "Exit PhoneBook" << std::endl;
	exit(1);
}

std::string	PhoneBook::getValidInput(const std::string &prompt)
{
	std::string	input;

	while (1)
	{
		std::cout << prompt << ": ";
		if (!(std::getline(std::cin, input)))
		{
			std::cout << std::endl;
			exitPhoneBook();
		}
		if (!input.empty())
			return (input);
	}
}

void	PhoneBook::addInformation(Contact &contact)
{
	contact.getFirstName(getValidInput("First Name"));
	contact.getLastName(getValidInput("Last Name"));
	contact.getNickname(getValidInput("Nickname"));
	contact.getPhoneNumber(getValidInput("Phone Number"));
	contact.getDarkestSecret(getValidInput("Darkest Secret"));
	this->_contacts[this->_index] = contact;
	this->_index = (this->_index + 1) % 8;
	if (this->_index < 8)
		this->_count++;
}

void	PhoneBook::searchInformation(void)
{
	if (this->_count == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
}
