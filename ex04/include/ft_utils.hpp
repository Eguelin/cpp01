/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:32:56 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/26 16:43:00 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_HPP
# define FT_UTILS_HPP

# include <iostream>
# include <fstream>
# include <string>

int			ft_file_to_str( const char *name, std::string &str );
std::string ft_replace( std::string str, const std::string word, const std::string new_word );
int			ft_create_new_file( const char *name, const std::string str );

#endif
