/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:39:32 by mizusato          #+#    #+#             */
/*   Updated: 2025/03/26 20:46:32 by mizusato         ###   ########.fr       */
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
		bool	_isFull;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void		displayInstruction(void);
		void		addInformation(const Contact &contact);
		void		searchInformation(void);
};

#endif
