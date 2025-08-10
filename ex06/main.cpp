/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:42:58 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/12 10:45:17 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;

	if (ac == 1)
	{
		std::cout << "[Insert comment's level: DEBUG, INFO, WARNING, ERROR]" << std::endl;
		return (0);
	}
	harl.complain(av[1]);
	return (0);
}
