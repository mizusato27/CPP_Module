/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 11:17:42 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/20 11:57:40 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>

# define ERR_ARGS		"Error: Invalid arguments.\n[usage]\n./replace <filename> <old word> <new word>"
# define ERR_EMPTY_STR	"Error: The search str cannot be empty."
# define ERR_OPEN_FILE	"Error: Failed to open file."

class	Replacer
{
	private:
		std::string	_file;
		std::string	_s1;
		std::string	_s2;

	public:
		Replacer(std::string const& file, std::string const& s1, std::string const& s2);
		~Replacer(void);

		std::string	readInputFile(void);
		void		replaceWord(std::string& content);
		void		replaceFile(void);
};

void	errorExit(std::string const& msg);
void	checkArgs(const int argc);

#endif
