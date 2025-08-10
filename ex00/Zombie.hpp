/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:06:56 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 11:27:58 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
 #define ZOMBIE_H
 #include <iostream>
 
class Zombie
{
	private:
		std::string	name;
	public:
		Zombie( void );
		~Zombie( void );
		void		setName(std::string name);
		std::string	getName( void );
		void		announce( void );
};
	
Zombie*		newZombie(std::string name);
void		randomChump(std::string name);
#endif