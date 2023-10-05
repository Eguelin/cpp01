/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:47:38 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/05 13:11:46 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.hpp"

int main( int argc, char const **argv )
{
	std::ifstream	in_file(argv[1]);
	std::string		new_str;

	if (argc != 4)
	{
		if (argc < 4)
			std::cerr << "not enough arguments" << std::endl;
		else
			std::cerr << "too many arguments" << std::endl;
		if (in_file.is_open())
			in_file.close();
		return (1);
	}

	if (!in_file.is_open())
	{
		std::cerr << "failure to open input file" << std::endl;
		return (1);
	}

	new_str = ft_replace(ft_file_to_str(in_file), argv[2], argv[3]);
	in_file.close();

	if (ft_creat_new_file(((std::string)argv[1] + ".replace").c_str(), new_str))
		return (1);

	return (0);
}


