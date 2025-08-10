/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:35:39 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 12:02:47 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	int		i;
	Zombie	*zombieArr = zombieHorde(8, "Rick");

	for (i = 0; i < 8; i++)
		zombieArr[i].announce();
	delete[] zombieArr;
	
	return (0);
}