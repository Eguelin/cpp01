/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:32:10 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/21 16:31:31 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.hpp"

std::string	ft_file_to_str( std::ifstream &in_file )
{
	std::string		file;
	std::string		line;

    while(std::getline(in_file, line))
		file += line + "\n";

	return (file);
}

std::string ft_replace( std::string str, std::string const word, std::string const new_word )
{
	std::size_t pos = str.find(word);

	while (pos != std::string::npos)
	{
		str.erase(pos, word.size());
		str.insert(pos, new_word);
		pos = str.find(word, pos + word.length());
	}

	return (str);
}

int	ft_creat_new_file( char const *name, std::string const str )
{
	std::ofstream	out_file(name);

	if (!out_file.is_open())
	{
		std::cerr << "failure to open output file" << std::endl;
		return (1);
	}

	out_file << str;
	out_file.close();

	return (0);
}
