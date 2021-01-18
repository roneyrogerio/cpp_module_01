/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:36:13 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/13 11:22:56 by rde-oliv         ###   ########.fr       */
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
		void		announce(void);
		void		setName(std::string name);
		void		setType(std::string type);
		std::string	getName(void);
		std::string	getType(void);
};
