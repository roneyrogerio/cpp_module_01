/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:00:45 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/18 22:04:24 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	srand(time(NULL));
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

void	ZombieEvent::random(Zombie &zombie)
{
	const char	*names[8] = {"Scrawny",
							"Buster",
							"Muller",
							"Wailer",
							"Barker",
							"Exploder",
							"Dancer",
							"Itcher"};
	const char	*types[4] = {"Technological",
							"Biological",
							"Supernatural",
							"Magic"};

	zombie.setName(names[rand() % 8]);
	zombie.setType(types[rand() % 4]);
}

void	ZombieEvent::randomChump(void)
{
	Zombie		zombie;

	random(zombie);
	zombie.announce();
}
