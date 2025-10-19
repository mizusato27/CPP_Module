/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 04:21:21 by mizusato          #+#    #+#             */
/*   Updated: 2025/10/20 05:20:34 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "--- ClapTrap Test ---" << std::endl;
	ClapTrap claptrap("CL4P-TP");
	claptrap.attack("Bandit");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);

	std::cout << "\n--- ScavTrap Test ---" << std::endl;
	// コンストラクタ呼び出し順: ClapTrap -> ScavTrap
	ScavTrap scavtrap("SC4V-TP");

	scavtrap.attack("Rakk");      // ScavTrap 版の attack (AD 20)
	scavtrap.takeDamage(30);    // ClapTrap から継承
	scavtrap.beRepaired(20);    // ClapTrap から継承
	scavtrap.guardGate();       // ScavTrap 固有の能力

	std::cout << "\n--- ScavTrap Energy Test ---" << std::endl;
	ScavTrap energyScav("EnergyBot");
	// EP 50 あるはず
	for (int i = 0; i < 51; ++i)
		energyScav.attack("Target");

	std::cout << "\n--- Copy Test ---" << std::endl;
	ScavTrap scavCopy(scavtrap);
	scavCopy.attack("CopyTarget");

	std::cout << "\n--- Destructing ---" << std::endl;
	// デストラクタ呼び出し順: ScavTrap -> ClapTrap
	return 0;
}
