/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-10 11:51:46 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-10 11:51:46 by mcastrat         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main (void){
    PhoneBook phonebook;
    std::string input;

    std::cout << " Yo, welcome to the 19 Phonebook!, Use the following cmd (ADD, SEARCH, EXIT): " << std::endl;
    while(true)
    {
        
        std::cout << "cmd: ";
        std::getline(std::cin, input);
        if (std::cin.eof() || std::cin.fail())
        {
        std::cout << "Input Canceled" << std::endl;
            std::cin.clear();
            break;
        }
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
            phonebook.searchContact();
        else if (input == "EXIT")
            break;
        else
            std::cout << "Invalid cmd, pls use (ADD, SEARCH, EXIT)" << std::endl;
    }
    return (0);
}