/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 11:38:05 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 11:45:14 by cazerini         ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name );

#endif
