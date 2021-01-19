/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:36:13 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/18 21:56:23 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class	Zombie
{
	std::string	name;
	std::string	type;

	public:
		Zombie(void);
		void		announce(void);
		void		setName(std::string name);
		void		setType(std::string type);
		std::string	getName(void);
		std::string	getType(void);
};
