/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:06:02 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/07 11:42:05 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// constructor
HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
	return ;
}

// destructor
HumanB::~HumanB( void )
{
	return ;
}

// getters
Weapon	*HumanB::getWeapon( void )
{
	return (this->weapon);
}

// setters
void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

// functions
void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with their "
	<< this->weapon->getType() << std::endl; 
}