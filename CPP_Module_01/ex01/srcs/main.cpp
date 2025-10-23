/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:35:41 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/23 19:59:43 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	int		nbrZombie = 10;
	Zombie	*zombies = zombieHorde(nbrZombie, "Horde Member");

	if (!zombies)
	{
		std::cerr << "Error" << std::endl;
		std::cerr << "Failed to create zombie horde." << std::endl;
		return (1);
	}
	for (int i = 0; i < nbrZombie; i++)
		zombies[i].announce();
	delete[] zombies;

	Zombie	*zombie = zombieHorde(1, "Lonely Z");

	if (!zombie)
	{
		std::cerr << "Error" << std::endl;
		std::cerr << "Failed to create zombie horde." << std::endl;
		return (1);
	}
	zombie[0].announce();
	delete[] zombie;

	Zombie	*heapZombie = new Zombie("Heap");
	heapZombie->announce();
	delete heapZombie;

	return (0);
}
