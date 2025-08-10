/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:44:16 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/11 18:36:27 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
 #define HARL_H
 #include <iostream>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
};

#endif