/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:00:54 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/18 17:00:31 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class ZombieEvent
{
	std::string	ZombieType;

	public:
		ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		void	randomChump(void);
};
