/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:47:11 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/14 15:01:21 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	_hp = 100;
	_energy_p = 100;
	_attack_dmg = 30;
	std::cout << " FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name){
	_hp = 100;
	_energy_p = 100;
	_attack_dmg = 30;
	std::cout << " FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << " FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
	std::cout << " FragTrap assignment operator called" << std::endl;
	if (this != &other){
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << " FragTrap " << _name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << " FragTrap " << _name << " want to do a  high 5.." << std::endl;
}
