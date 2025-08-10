/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:06:21 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 11:32:47 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main( void )
{
	Zombie	*zombie = newZombie("Mark");

	zombie->announce();
	delete zombie;
	
	randomChump("Nathan");
	
	return (0);
}