/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:45:48 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 14:19:13 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// constructor
Weapon::Weapon( std::string type )
{
	this->setType(type);
	return ;	
}

// destructor
Weapon::~Weapon( void )
{
	return ;	
}

// getters
std::string	Weapon::getType( void ) const
{
	return (this->type);
}

// setters
void	Weapon::setType(std::string type)
{
	this->type = type;
}
