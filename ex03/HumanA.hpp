/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:02:29 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/22 12:40:59 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
 #define HUMANA_H
 #include <iostream>
 #include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );
		void		setWeapon(Weapon weapon);
		Weapon		&getWeapon( void );
		void		attack();
};

#endif