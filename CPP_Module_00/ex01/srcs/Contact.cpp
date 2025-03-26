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
