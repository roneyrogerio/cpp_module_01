/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 22:52:51 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/20 23:13:29 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_by_pointer(std::string *std)
{
	std::cout << *std << std::endl;
}

void	print_by_reference(std::string &std)
{
	std::cout << std << std::endl;
}

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	print_by_pointer(&str);
	print_by_reference(str);
}
