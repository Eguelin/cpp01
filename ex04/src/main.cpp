/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:47:38 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 16:43:21 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.hpp"

int main( int argc, char const **argv )
{
	std::string	str;
	std::string	new_str;
	std::string	new_name;

	if (argc != 4)
	{
		if (argc < 4)
			std::cerr << "not enough arguments" << std::endl;
		else
			std::cerr << "too many arguments" << std::endl;

		return (1);
	}

	if (argv[2][0] == '\0')
	{
		std::cerr << "char 0: no previous regular expression" << std::endl;

		return (1);
	}

	if (ft_file_to_str(argv[1], str))
		return (1);

	new_str = ft_replace(str, argv[2], argv[3]);
	new_name = std::string(argv[1]) + ".replace";

	if (ft_create_new_file(new_name.c_str(), new_str))
		return (1);

	return (0);
}


