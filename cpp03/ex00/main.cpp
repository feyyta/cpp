/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:41:27 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/14 13:23:04 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){

	std::cout << "\n=== Test 1: Basic Construction ===" << std::endl;
	ClapTrap clap1("Bob");
	ClapTrap clap2("Alice");

	std::cout << "\n=== Test 2: Attack ===" << std::endl;
	clap1.attack("Alice");
	clap1.attack("Alice");
	clap1.attack("Alice");

	std::cout << "\n=== Test 3: Take Damage ===" << std::endl;
	clap2.takeDamage(3);
	clap2.takeDamage(5);
	clap2.takeDamage(10);

	std::cout << "\n=== Test 4: Repair ===" << std::endl;
	clap1.beRepaired(5);
	clap1.beRepaired(3);

	std::cout << "\n=== Test 5: Energy Exhaustion ===" << std::endl;
	ClapTrap clap3("Charlie");
	for (int i = 0; i < 12; i++){
		clap3.attack("target");
	}

	std::cout << "\n=== Test 6: Dead ClapTrap ===" << std::endl;
	clap2.attack("Bob");
	clap2.beRepaired(5);
	clap2.takeDamage(5);

	std::cout << "\n=== Test 7: Copy Constructor ===" << std::endl;
	ClapTrap clap4(clap1);
	clap4.attack("enemy");

	std::cout << "\n=== Test 8: Assignment Operator ===" << std::endl;
	ClapTrap clap5;
	clap5 = clap1;
	clap5.attack("enemy");

	std::cout << "\n=== Destructors ===" << std::endl;
	return 0;
}
