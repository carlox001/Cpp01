/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:05:48 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/07 11:40:36 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
 #define HUMANB_H
 #include <iostream>
 #include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*weapon;
		std::string	name;
	public:
		HumanB(std::string name);
		~HumanB( void );
		void		setWeapon(Weapon &weapon);
		Weapon		*getWeapon( void );
		void		attack();
};

#endif