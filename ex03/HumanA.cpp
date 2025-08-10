/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:02:16 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/22 12:40:53 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

// constructor
HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon), name(name)
{
	return ;
}

// destructor
HumanA::~HumanA( void )
{
	return ;
}

// getters
Weapon	&HumanA::getWeapon( void )
{
	return (weapon);
}

// setters
void	HumanA::setWeapon(Weapon weapon)
{
	this->weapon.setType(weapon.getType());
}

// functions
void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with their "
	<< this->weapon.getType() << std::endl; 
}
