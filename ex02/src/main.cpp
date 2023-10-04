/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:55:53 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/04 11:12:22 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "The memory address of the string =	" << &string << std::endl;
	std::cout << "The memory address held by stringPTR =	" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF =	" << &stringREF << std::endl;

	std::cout << "The value of the string  =		" << string << std::endl;
	std::cout << "The value pointed to by stringPTR =	" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF =	" << stringREF << std::endl;
	return 0;
}
