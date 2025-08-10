/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:42:30 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/11 18:36:52 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// constructor
Harl::Harl( void )
{
	return ;
}

// destructor
Harl::~Harl( void )
{
	return ;
}

// functions
void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
	<< std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. \
You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" 
	<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. \
I've been coming for years, whereas you started working here just last month." 
	<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." 
	<< std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int	i = 0;
	while (levels[i] != level && i < 4)
		i++;
	if (i < 4)
		(this->*functions[i]) ();
	else
		std::cout << "Not a valid level" << std::endl;

}
