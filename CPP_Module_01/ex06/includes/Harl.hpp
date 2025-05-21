/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:29:27 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/21 18:48:03 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define NBR_LEVELS 4
# define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!"
# define INFO_MSG "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!"
# define WARNING_MSG "I think I deserve to have some extra bacon for free.\nI've been coming for years, whereas you started working here just last month."
# define ERROR_MSG "This is unacceptable! I want to speak to the manager now."
# define INVALID_MSG "[ Probably complaining about insignificant problems ]"

# define ERR_ARGS "Error: [ usage ]\n./harlFilter <level>"

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl(void);
		~Harl(void);

		int		getLevel(std::string const& level);
		void	complain(std::string const& level);
};

#endif
