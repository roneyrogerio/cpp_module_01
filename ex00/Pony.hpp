/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:29:09 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/08 12:08:45 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class	Pony
{
	std::string	color;
	std::string	residence;
	bool		glitter;
	
	public:
		Pony(void);
		~Pony(void);
		void	WhoIs(void);
		void	setColor(std::string color);
		void	setResidence(std::string residence);
		void	setGlitter(bool glitter);
};
