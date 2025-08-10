/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:45:58 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 14:17:06 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
 #define WEAPON_H
 #include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		~Weapon( void );
		std::string	getType( void ) const;
		void		setType(std::string type);
};

#endif