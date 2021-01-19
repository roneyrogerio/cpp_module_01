/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:00:54 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/18 22:10:23 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Zombie.hpp"

class ZombieEvent
{
	std::string	ZombieType;

	public:
		ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump(void);
	private:
		void	random(Zombie &zombie);
};
