/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:04:11 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/06 12:36:34 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string	str =  "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "string's memory address: " << &str << std::endl;
	std::cout << "pointer's memory address: " << ptr << std::endl;
	std::cout << "reference's memory address: " << &ref << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "string's value: " << str << std::endl;
	std::cout << "pointer's value: " << *ptr << std::endl;
	std::cout << "reference's value: " << ref << std::endl;

	return (0);
}