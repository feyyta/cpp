/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-29 22:34:48 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-29 22:34:48 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("roro");
	Zombie *bro = newZombie("popo");
	if (!bro)
		return 1;
	bro->announce();
	delete bro;
	return 0;
}
