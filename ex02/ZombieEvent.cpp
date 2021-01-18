/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:00:45 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/18 17:01:14 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	ZombieType = "";
}

void	ZombieEvent::setZombieType(std::string type)
{
	ZombieType = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	zombie = new Zombie;

	zombie->setType(ZombieType);
	zombie->setName(name);
	return zombie;
}

void	ZombieEvent::randomChump(void)
{
	Zombie		zombie;
	const char	*names[8] = {"Scrawny", "Buster", "Muller", "Wailer", "Barker", "Exploder", "Dancer", "Itcher"};

	zombie.setName(names[rand() % 7]);
	zombie.setType(ZombieType);
	zombie.announce();
}
