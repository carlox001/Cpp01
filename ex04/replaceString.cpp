/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:54:22 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/11 16:00:10 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	replaceString(int ac, char **av)
{
	std::fstream	file;
	std::fstream	replace;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments [insert: <feilename> <s1> <s2>]"
		<< std::endl;
		return (1);
	}
	std::string	name = av[1];
	name += ".replace";
	file.open(av[1], std::fstream::in);
	replace.open(name.c_str(), std::fstream::out);
	
	writeInFile(&file, &replace, av);
	
	file.close();
	replace.close();
	return (0);
}

void	writeInFile(std::fstream *file, std::fstream *replace, char **av)
{
	std::string	line;
	int			flag;

	while (getline(*file, line))
	{
		for (int i = 0; line[i]; i++)
		{
			flag = 0;
			if (line[i] == av[2][0])
			{
				int j = 0;
				while (av[2][j] && line[i + j] == av[2][j])
					j++;
				if (av[2][j] == '\0')
				{
					*replace << av[3];
					i += j - 1;
					flag = 1;
				}
			}
			if (flag == 0)
				*replace << line[i];
		}
		*replace << std::endl;
	}
}
