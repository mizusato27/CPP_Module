/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:30:20 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/20 08:49:12 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	std::cout << "--- ClapTrap Test ---" << std::endl;
	ClapTrap claptrap("CL4P-TP");
	claptrap.attack("Bandit");

	std::cout << "\n--- ScavTrap Test ---" << std::endl;
	ScavTrap scavtrap("SC4V-TP");
	scavtrap.attack("Rakk");
	scavtrap.guardGate();

	std::cout << "\n--- FragTrap Test ---" << std::endl;
	// コンストラクタ呼び出し順: ClapTrap -> FragTrap
	FragTrap fragtrap("FR4G-TP");

	fragtrap.attack("Psycho");   // FragTrap 版の attack (AD 30)
	fragtrap.takeDamage(50);   // ClapTrap から継承
	fragtrap.beRepaired(25);   // ClapTrap から継承
	fragtrap.highFivesGuys();  // FragTrap 固有の能力

	std::cout << "\n--- FragTrap Energy Test ---" << std::endl;
	FragTrap energyFrag("EnergyBotFrag");
	// EP 100 あるはず
	for (int i = 0; i < 101; ++i)
		energyFrag.attack("Target");

	std::cout << "\n--- Destructing ---" << std::endl;
	// デストラクタ呼び出し順:
	// FragTrap -> ClapTrap
	// ScavTrap -> ClapTrap
	// ClapTrap
	return 0;
}
