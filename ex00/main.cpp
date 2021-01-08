/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:50:06 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/08 13:53:09 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony;
	pony->setColor("red");
	pony->setResidence("heap");
	pony->setGlitter(false);
	std::cout << "— Who are you?" << std::endl;
	pony->WhoIs();
	delete pony;
}

void	ponyOnTheStack(void)
{
	Pony pony;
	std::cout << "— Who are you?" << std::endl;
	pony.WhoIs();
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
