/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-29 22:40:13 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-29 22:40:13 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {

    private :
        std::string _name;
    
    public :
        Zombie(std::string name);
        ~Zombie();
        void    announce();
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif
