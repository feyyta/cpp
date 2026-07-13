/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:37:05 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/14 14:32:07 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	_hp = 100;
  	_energy_p = 50;
  	_attack_dmg = 20;
  	std::cout << " ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name){
	_hp = 100;
	_energy_p = 50;
	_attack_dmg = 20;
	std::cout << " ScavTrap " << _name << " constructor called" <<
std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << " ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
	std::cout << " ScavTrap assignment operator called" << std::endl;
	if (this != &other){
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << " ScavTrap " << _name << " destructor called" <<
std::endl;
}

void ScavTrap::attack(const std::string &target){

	if (_hp == 0) {
		std::cout << " ScavTrap " << _name << " is dead and can't attack!" <<
std::endl;
		return;
	}
	if (_energy_p == 0){
		std::cout << " ScavTrap " << _name << " has no more energy!" <<
std::endl;
		return;
	}
	_energy_p--;
	std::cout << " ScavTrap " << _name << " attacks " << target
			  << ", causing " << _attack_dmg << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << " ScavTrap " << _name << " is now in Gate keeper mode!"
<< std::endl;
}



