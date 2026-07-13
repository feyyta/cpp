/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-29 23:00:39 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-29 23:00:39 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name){

    Zombie *bro;
    try{
        bro = new Zombie(name);
    }
    catch(std::bad_alloc& err){
        std::cout << "alloc err: " << err.what() << std::endl;
        return NULL;
    }
    return bro;
}