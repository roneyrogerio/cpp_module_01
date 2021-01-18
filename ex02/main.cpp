/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieChat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:23:36 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/18 16:59:13 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent*	ze = new ZombieEvent;
	Zombie*			zombie;

	srand (time (0));
	ze->setZombieType("Technological");
	zombie = ze->newZombie("Ana");
	zombie->announce();
	delete zombie;
	ze->setZombieType("Biological");
	zombie = ze->newZombie("Zec");
	zombie->announce();
	delete zombie;
	ze->randomChump();
	ze->setZombieType("Supernatural");
	ze->randomChump();
	ze->setZombieType("Biological");
	ze->randomChump();
	ze->setZombieType("Magic");
	ze->randomChump();
	delete ze;
	return (0);
}
