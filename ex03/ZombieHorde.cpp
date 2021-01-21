/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:33:45 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/20 22:38:46 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand(time(NULL));
	zombiesCount = n;
	zombies = new Zombie[zombiesCount + 1];
	for (int i = 0; i < n; i++)
		random(zombies[i]);
}

ZombieHorde::~ZombieHorde(void)
{
	delete []zombies;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < zombiesCount; i++)
		announce(zombies[i]);
}

void	ZombieHorde::announce(Zombie &zombie)
{
	std::cout << "<" << zombie.getName() << " (" << zombie.getType() << ")> Braiiiiiiinnnssss...";
	std::cout << std::endl;
}

void	ZombieHorde::random(Zombie &zombie)
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
