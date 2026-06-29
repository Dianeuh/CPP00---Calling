/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:36:40 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/29 18:06:35 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_Contacts[MAX_CONTACTS];
		int		_slot;
		int		_used;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int		getCurrentSlot(void) const;
		int		getUsedSlots(void) const;
		void	AddContact(void);
		void	DisplayContacts(void);
		// void	SearchIndex(void);
};

#endif