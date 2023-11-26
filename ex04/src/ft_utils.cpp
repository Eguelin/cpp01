/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:32:10 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 16:42:53 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.hpp"

int	ft_file_to_str( const char *name, std::string &str )
{
	std::ifstream	in_file(name);
	std::string		line;

	if (!in_file.is_open())
	{
		std::cerr << "failure to open input file" << std::endl;

		return (1);
	}

    while(std::getline(in_file, line))
		str += line + "\n";

	in_file.close();

	return (0);
}

std::string ft_replace( std::string str, const std::string word, const std::string new_word )
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

int	ft_create_new_file( const char *name, const std::string str )
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
