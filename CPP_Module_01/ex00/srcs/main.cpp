/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:48:53 by mizusato          #+#    #+#             */
/*   Updated: 2025/05/14 09:58:11 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	// ヒープ上にZombieを作成
	Zombie	*heapZombie = newZombie("Alecks");

	// スタック上にZombieを作成
	randomChump("Bob");

	// ヒープ上のZombieの解放
	delete heapZombie;

	return (EXIT_SUCCESS);
}
