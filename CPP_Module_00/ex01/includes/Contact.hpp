/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:32:22 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/23 20:51:22 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		void		setFirstName(const std::string &firstName);
		void		setLastName(const std::string &lastName);
		void		setNickname(const std::string &nickname);
		void		setPhoneNumber(const std::string &phoneNumber);
		void		setDarkestSecret(const std::string &darkestSecret);
		std::string	formatForDisplay(const std::string &str) const;
		void		printInformation(const int index) const;
		void		printDetailInformation(void) const;
};

#endif
