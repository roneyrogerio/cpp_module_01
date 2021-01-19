/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:23:36 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/18 17:48:39 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent*	ze = new ZombieEvent;
	Zombie*			zombie;

	ze->setZombieType("Technological");
	zombie = ze->newZombie("Ana");
	zombie->announce();
	delete zombie;
	ze->setZombieType("Biological");
	zombie = ze->newZombie("Zec");
	zombie->announce();
	delete zombie;
	ze->randomChump();
	ze->randomChump();
	ze->randomChump();
	ze->randomChump();
	delete ze;
	return (0);
}
