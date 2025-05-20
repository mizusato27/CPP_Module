/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 11:24:26 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/20 11:53:20 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string const& file, std::string const& s1, std::string const& s2)
: _file(file), _s1(s1), _s2(s2)
{
}

Replacer::~Replacer(void)
{
}

std::string	Replacer::readInputFile(void)
{
	std::ifstream	ifs(_file.c_str());
	std::string		content;
	std::string		line;

	if (ifs.fail())
		errorExit(ERR_OPEN_FILE);
	while (std::getline(ifs, line))
	{
		content += line;
		if (!ifs.eof())
			content += '\n';
	}
	ifs.close();
	return (content);
}

void	Replacer::replaceWord(std::string& content)
{
	const size_t	len = _s1.length();
	size_t			pos = 0;

	pos = content.find(_s1, pos);
	while (pos != std::string::npos)
	{
		content.erase(pos, len);
		content.insert(pos, _s2);
		pos = content.find(_s1, pos);
	}
}

void	Replacer::replaceFile(void)
{
	std::string		content = readInputFile();

	replaceWord(content);

	std::ofstream	ofs((_file + ".replace").c_str());

	if (ofs.fail())
		errorExit(ERR_OPEN_FILE);
	ofs << content;
	ofs.close();
}
