#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0), _isFull(false)
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

void	PhoneBook::addInformation(const Contact &contact)
{
	this->_contacts[this->_index] = contact;
	this->_index = (this->_index + 1) % 8;
	if (this->_index == 7)
		this->_isFull = true;
}

void	PhoneBook::searchInformation(void)
{
	std::cout << "search info" <<std::endl;
}
