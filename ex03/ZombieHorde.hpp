/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:33:53 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/20 22:37:16 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cstdlib>
# include <ctime>
# include "Zombie.hpp"

class	ZombieHorde
{
	Zombie	*zombies;
	int		zombiesCount;

	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void	announce(void);
		void	announce(Zombie &zombie);
	private:
		void	random(Zombie &zombie);
};
