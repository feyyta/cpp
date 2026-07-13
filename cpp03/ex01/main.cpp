/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:41:27 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/14 15:03:03 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){

	std::cout << "\n=== Test 1: ScavTrap construction/destruction chaining ===" << std::endl;
	ScavTrap scav("Bob");

	std::cout << "\n=== Test 2: ScavTrap attack (different message) ===" << std::endl;
	scav.attack("target");

	std::cout << "\n=== Test 3: ScavTrap guardGate ===" << std::endl;
	scav.guardGate();

	std::cout << "\n=== Test 4: ScavTrap attributes (100 HP, 50 energy, 20 dmg) ===" << std::endl;
	ScavTrap scav2("Alice");
	scav2.attack("enemy");
	scav2.takeDamage(30);
	scav2.beRepaired(20);
	scav2.attack("enemy");

	std::cout << "\n=== Test 5: Energy exhaustion (50 points) ===" << std::endl;
	ScavTrap scav3("Charlie");
	for (int i = 0; i < 52; i++){
		scav3.attack("dummy");
	}

	std::cout << "\n=== Destructors (reverse order) ===" << std::endl;
	return 0;
}
