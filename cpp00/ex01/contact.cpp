/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-09 14:06:29 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-09 14:06:29 by mcastrat         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void    Contact::setfirstname(std::string firstname){
    this->_firstname = firstname;
}
void    Contact::setlastname(std::string lastname){
    this->_lastname = lastname;
}
void    Contact::setphonenumber(std::string phonenumber){
    this->_phonenumber = phonenumber;
}
void    Contact::setnickname(std::string nickname){
    this->_nickname = nickname;
}
void    Contact::setdarkestsecret(std::string darkestsecret){
    this->_darkestsecret = darkestsecret;
}   

std::string Contact::getfirstname(void) const{
    return (this->_firstname);
}
std::string Contact::getlastname(void) const{
    return (this->_lastname);
}
std::string Contact::getphonenumber(void) const{
    return (this->_phonenumber);
}
std::string Contact::getnickname(void) const{
    return (this->_nickname);
}
std::string Contact::getdarkestsecret(void) const{
    return (this->_darkestsecret);
}