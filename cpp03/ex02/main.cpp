/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:41:27 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/14 15:02:05 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){

	std::cout << "\n=== Test 1: FragTrap construction/destruction chaining ===" << std::endl;
	FragTrap frag("Bob");

	std::cout << "\n=== Test 2: FragTrap attack (uses ClapTrap version) ===" << std::endl;
	frag.attack("target");

	std::cout << "\n=== Test 3: FragTrap highFivesGuys ===" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n=== Test 4: FragTrap attributes (100 HP, 100 energy, 30 dmg) ===" << std::endl;
	FragTrap frag2("Alice");
	frag2.attack("enemy");
	frag2.takeDamage(40);
	frag2.beRepaired(25);
	frag2.attack("enemy");

	std::cout << "\n=== Test 5: Energy exhaustion (100 points) ===" << std::endl;
	FragTrap frag3("Charlie");
	for (int i = 0; i < 102; i++){
		frag3.attack("dummy");
	}

	std::cout << "\n=== Test 6: All three types ===" << std::endl;
	ClapTrap clap("Clappy");
	ScavTrap scav("Scavvy");
	FragTrap frag4("Fraggy");
	clap.attack("target");
	scav.attack("target");
	frag4.attack("target");

	std::cout << "\n=== Destructors (reverse order) ===" << std::endl;
	return 0;
}
