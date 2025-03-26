/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:32:22 by mizusato          #+#    #+#             */
/*   Updated: 2025/03/26 20:18:26 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <stdlib.h>

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

		void	getFirstName(const std::string &firstName);
		void	getLastName(const std::string &lastName);
		void	getNickname(const std::string &nickname);
		void	getPhoneNumber(const std::string &phoneNumber);
		void	getDarkestSecret(const std::string &darkestSecret);
};

#endif
