/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:06:01 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/23 21:00:31 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string const& weapon);
		~Weapon(void);

		const std::string&	getType(void) const;
		void				setType(std::string const& newType);
};

#endif
