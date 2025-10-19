/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 03:56:09 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/20 04:03:54 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "--- Constructing ---" << std::endl;
	ClapTrap claptrap("CL4P-TP");
	ClapTrap defaultClap; // デフォルトコンストラクタ

	std::cout << "\n--- Testing Actions (CL4P-TP) ---" << std::endl;
	claptrap.attack("Bandit"); // Attack Damage は 0 のはず
	claptrap.beRepaired(5);
	claptrap.takeDamage(3);
	claptrap.takeDamage(15); // HPが 0 以下になる
	claptrap.takeDamage(5); // HP 0 なので動けない
	claptrap.beRepaired(10); // HP 0 なので動けない

	std::cout << "\n--- Testing Energy Points (Default) ---" << std::endl;
	// Energy が 10 なので 10 回行動できる
	defaultClap.attack("Skag"); // 1
	defaultClap.attack("Skag"); // 2
	defaultClap.attack("Skag"); // 3
	defaultClap.beRepaired(1); // 4
	defaultClap.beRepaired(1); // 5
	defaultClap.beRepaired(1); // 6
	defaultClap.beRepaired(1); // 7
	defaultClap.beRepaired(1); // 8
	defaultClap.beRepaired(1); // 9
	defaultClap.beRepaired(1); // 10 (Energy が 0 に)
	defaultClap.attack("Skag"); // Energy 0 なので動けない
	defaultClap.beRepaired(1); // Energy 0 なので動けない

	std::cout << "\n--- Testing Copy ---" << std::endl;
	ClapTrap copy(defaultClap); // コピーコンストラクタ
	copy.attack("CopyTarget"); // コピーも Energy 0 なので動けないはず

	std::cout << "\n--- Destructing ---" << std::endl;
	// main 終了時にデストラクタが呼ばれる
	return 0;
}
