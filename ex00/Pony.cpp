/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:11:31 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/08 14:22:24 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	color = "pink";
	residence = "stack";
	glitter = true;
}

Pony::~Pony(void)
{
	std::cout << "My condolences dear reader, the previous pony died.";
	std::cout << std::endl;
}

void	Pony::WhoIs(void)
{
	std::cout << "— I'm a " << color << " poney, I ";
	if (!glitter)
		std::cout << "don't ";
	std::cout << "use glitter ";
	std::cout << "and I live in the " << residence << "." << std::endl;
}

void	Pony::setColor(std::string color)
{
	this->color = color;
}

void	Pony::setResidence(std::string residence)
{
	this->residence = residence;
}

void	Pony::setGlitter(bool glitter)
{
	this->glitter = glitter;
}
