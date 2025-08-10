/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:42:58 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/12 10:17:32 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	std::string	level;
	Harl		harl;

	while (1)
	{
		std::cout << "Insert comment's level {DEBUG, INFO, WARNING, ERROR}: ";
		getline(std::cin, level);
		if (level == "")
		{
			std::cout << std::endl;
			break ;
		}
		harl.complain(level);
	}
	return (0);
}