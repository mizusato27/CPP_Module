#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::getFirstName(const std::string &firstName)
{
	this->_firstName = firstName;
}

void	Contact::getLastName(const std::string &lastName)
{
	this->_lastName = lastName;
}

void	Contact::getNickname(const std::string &nickname)
{
	this->_nickname = nickname;
}

void	Contact::getPhoneNumber(const std::string &phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::getDarkestSecret(const std::string &darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::formatForDisplay(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::printInformation(const int index) const
{

	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << this->formatForDisplay(this->_firstName) << "|";
	std::cout << std::setw(10) << this->formatForDisplay(this->_lastName) << "|";
	std::cout << std::setw(10) << this->formatForDisplay(this->_nickname) << std::endl;
}

void	Contact::printDetailInformation(void) const
{
	std::cout << "First Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
}
