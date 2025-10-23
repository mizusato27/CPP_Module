/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:39:32 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/23 18:49:38 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;
		int		_count;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		displayInstruction(void);
		void		exitPhoneBook(void) const;
		std::string	getValidInput(const std::string &prompt) const;
		void		addInformation(Contact &contact);
		int			getValidNumber(const std::string &prompt) const;
		void		searchInformation(void) const;
};

#endif
