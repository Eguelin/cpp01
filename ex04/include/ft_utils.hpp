/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:32:56 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/04 18:02:42 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_HPP
# define FT_UTILS_HPP
# include <iostream>
# include <fstream>
# include <string>

std::string	ft_file_to_str(std::ifstream &in);
std::string	ft_replace(std::string str, std::string const word, std::string const new_word);
int			ft_creat_new_file(char const *name, std::string const str);

#endif
