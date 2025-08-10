/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:36:05 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 11:59:12 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// constructor
Zombie::Zombie( void )
{
	return ;
}

// destructor
Zombie::~Zombie( void )
{
	std::cout << this->name << " is destroyed" << std::endl;
	return ;
}
// getters
std::string	Zombie::getName( void )
{
	return (this->name);
}

// setters
void	Zombie::setName(std::string name)
{
	this->name = name;
}

// functions
void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
