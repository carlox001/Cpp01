/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:38:40 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 11:52:14 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombieArr(new Zombie[N]);
	int		i;

	for (i = 0; i < N; i++)
		zombieArr[i].setName(name);
	return (zombieArr);
}
