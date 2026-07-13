/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-09 14:06:40 by mcastrat          #+#    #+#             */
/*   Updated: 2025-10-09 14:06:40 by mcastrat         ###   ########          */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
    private:
        Contact _contact[MAX_CONTACTS];
        int     _index;
        int     _count;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    addContact(void);
        void    searchContact(void) const;      
};
#endif