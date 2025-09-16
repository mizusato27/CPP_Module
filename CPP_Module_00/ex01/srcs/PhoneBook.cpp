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

void	PhoneBook::exitPhoneBook(void) const
{
	std::cout << "Exit PhoneBook" << std::endl;
	exit(1);
}

std::string	PhoneBook::getValidInput(const std::string &prompt) const
{
	std::string	input;

	while (1)
	{
		std::cout << prompt << ": ";
		if (!(std::getline(std::cin, input)))
		{
			std::cout << std::endl;
			this->exitPhoneBook();
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

int		PhoneBook::getValidNumber(const std::string &prompt) const
{
	std::string	input;

	while (1)
	{
		std::cout << prompt << ": ";
		if (!(std::getline(std::cin, input)))
		{
			std::cout << std::endl;
			this->exitPhoneBook();
		}
		if (!input.empty())
		{
			if (input.length() != 1)
				continue ;
			if (isdigit(input[0]) && atoi(input.c_str()) < this->_count)
				break;
		}
	}
	return (atoi(input.c_str()));
}

void	PhoneBook::searchInformation(void) const
{
	int	index;

	if (this->_count == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}
	index = this->getValidNumber("Index");
	this->_contacts[index].printInformation(index);
}
