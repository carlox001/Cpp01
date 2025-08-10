/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:57:45 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/11 16:02:45 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
 #define REPLACE_H
 #include <iostream>
 #include <fstream>

// replaceString.cpp
int		replaceString(int ac, char **av);
void	writeInFile(std::fstream *file, std::fstream *replace, char **av);

#endif