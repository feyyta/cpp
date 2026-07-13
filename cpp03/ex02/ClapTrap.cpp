/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:41:29 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/19 18:10:58 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hp(10), _energy_p(10), _attack_dmg(0){
	std::cout << " ClapTrap default get called " << std::endl;
}

ClapTrap::ClapTrap(std:: string name) : _name(name), _hp(10), _energy_p(10), _attack_dmg(0){
	std::cout << " ClapTrap " << name << " get called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << " ClapTrap copy constructor get called " << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destructor called\n";
  }

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_energy_p = other._energy_p;
		_attack_dmg = other._attack_dmg;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target){

	if (_hp == 0){
		std::cout << " ClapTrap " << _name << " is dead and can't attack!" << std::endl;
		return;
	}
	if (_energy_p == 0){
		std::cout << " ClapTrap " << _name << " has no more energy!" << std::endl;
		return;
	}
	_energy_p--;
	std::cout << " ClapTrap " << _name << " attacks " << target
			  << ", causing " << _attack_dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){

	if (_hp == 0){
		std::cout << " ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	std::cout << " ClapTrap " << _name << " takes " << amount << " damage";
	if (amount >= _hp){
		_hp = 0;
		std::cout << " and dies!" << std::endl;
	}
	else {
		_hp -= amount;
		std::cout << "! (HP: " << _hp << ")" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){

	if (_hp == 0){
		std::cout << " ClapTrap " << _name << " is dead and can't repair!" << std::endl;
		return;
	}
	if (_energy_p == 0){
		std::cout << " ClapTrap " << _name << " has no more energy!" << std::endl;
		return;
	}
	_energy_p--;
	_hp += amount;
	std::cout << " ClapTrap " << _name << " repairs itself for " << amount
			  << " hit points! (HP: " << _hp << ")" << std::endl;
}
