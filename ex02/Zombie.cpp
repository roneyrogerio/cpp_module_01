/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:35:21 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/18 16:41:03 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss...";
	std::cout << std::endl;
}

void		Zombie::setName(std::string name)
{
	this->name = name;
}

void		Zombie::setType(std::string type)
{
	this->type = type;
}

std::string	Zombie::getName(void)
{
	return name;
}

std::string	Zombie::getType(void)
{
	return type;
}
