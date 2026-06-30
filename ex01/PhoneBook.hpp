/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:36:40 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/30 11:17:07 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8

# include <iostream>
# include <iomanip>
# include <cstdlib>
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
		void	prettyPrint(std::string field);
		void	SearchIndex(void);
};

#endif