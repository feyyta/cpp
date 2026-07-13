/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-09 14:06:36 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-09 14:06:36 by mcastrat         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#define MAX_CONTACTS 8

class Contact {
   
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phonenumber;
        std::string _darkestsecret;
    
    public:
        void    setfirstname(std::string firstname);
        void    setlastname(std::string lastname);
        void    setphonenumber(std::string phonenumber);
        void    setnickname(std::string nickname);
        void    setdarkestsecret(std::string darkestsecret);
        std::string getfirstname(void) const;
        std::string getlastname(void) const;
        std::string getphonenumber(void) const;
        std::string getnickname(void) const;
        std::string getdarkestsecret(void) const;
};

#endif