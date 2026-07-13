/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-08 23:10:46 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-08 23:10:46 by mcastrat         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
int main(void)
{
    std::cout << "yo la fafa" << std::endl;
    return (0);
}*/

int main (int ac, char **av){
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
            std::cout << (char)toupper(av[i][j]);
    }
    std::cout << std::endl;
    return (0);
}