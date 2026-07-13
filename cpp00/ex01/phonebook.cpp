/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-09 13:57:24 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-09 13:57:24 by mcastrat         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <cstdlib>


PhoneBook::PhoneBook(void){
    this->_index = 0;
    this->_count = 0;
}
PhoneBook::~PhoneBook(void){
}

static void checkclear(){
    std::cin.clear();
    std::cout << "Input Canceled" << std::endl;
    exit(1);
}

void PhoneBook::addContact(void){
    Contact newContact;
    std::string input;

    input = "";
    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    while(input.empty()) {
        if (std::cin.eof())
            checkclear();
        std::cout << "Not empty, enter first name: ";
        std::getline(std::cin, input);
    }
    newContact.setfirstname(input);

    input = "";
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    while(input.empty()) {
        if (std::cin.eof())
            checkclear();
        std::cout << "Not empty, enter last name: ";
        std::getline(std::cin, input);
    }
    newContact.setlastname(input);

    input = "";
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    while(input.empty()) {
        if (std::cin.eof())
            checkclear();
        std::cout << "Not empty, enter nickname: ";
        std::getline(std::cin, input);
    }
    newContact.setnickname(input);

    input = "";
    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    while(input.empty()) {
        if (std::cin.eof())
            checkclear();
        std::cout << "Not empty, enter phone number: ";
        std::getline(std::cin, input);
    }
    newContact.setphonenumber(input);

    input = "";
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    while(input.empty()) {
        if (std::cin.eof())
            checkclear();
        std::cout << " Not empty, enter darkest secret: ";
        std::getline(std::cin, input);
    }
    newContact.setdarkestsecret(input);
    this->_contact[this->_index % MAX_CONTACTS] = newContact;
    this->_index++;
    if (this->_count < MAX_CONTACTS)
        this->_count++;
    std::cout << "Contact added gg wp!" << std::endl;
}

static std::string lengthCheck(std::string str){
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

static void ignoreBuffer(void){
    std::cin.ignore(1000, '\n');
}

void PhoneBook::searchContact(void) const{
    int maxContacts;
    int index;

    if (this->_count < MAX_CONTACTS)
        maxContacts = this->_count;
    else
        maxContacts = MAX_CONTACTS;
    if (this->_count == 0) {
        std::cout << "Phonebook is empty, add some contacts first." << std::endl;
        return;
    }
    std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
    for (int i = 0; i < maxContacts; i++) {
        std::cout << "|";
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << lengthCheck(this->_contact[i].getfirstname()) << "|";
        std::cout << std::setw(10) << lengthCheck(this->_contact[i].getlastname()) << "|";
        std::cout << std::setw(10) << lengthCheck(this->_contact[i].getnickname()) << "|" << std::endl;
    }
    std::cout << "Enter the index of the contact to show infos: ";
    std::cin >> index;
    if(std::cin.eof())
        checkclear();
    if (std::cin.fail()) {
        std::cout << "Input Failed" << std::endl;
        std::cin.clear();
        ignoreBuffer();
        return;
    }
    if (index < 1 || index > maxContacts) {
        std::cout << "Invalid index." << std::endl;
        ignoreBuffer();
        return;
    }
    else
        ignoreBuffer();
    std::cout << "First name: " << this->_contact[index - 1].getfirstname() << std::endl;
    std::cout << "Last name: " << this->_contact[index - 1].getlastname() << std::endl;
    std::cout << "Nickname: " << this->_contact[index - 1].getnickname() << std::endl;
    std::cout << "Phone number: " << this->_contact[index - 1].getphonenumber() << std::endl;
    std::cout << "Darkest secret: " << this->_contact[index - 1].getdarkestsecret() << std::endl;
}

