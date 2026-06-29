/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:39:45 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/29 18:09:17 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_slot = 0;
	this->_used = 0;
	std::cout << GREEN << "PhoneBook was created !" << DEFAULT << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << RED << "Bye bye, my Awesome Phonebook . ₊˚ ☎︎₊˚✧" << std::endl;
	std::cout << DEFAULT;
	return ;
}

int		PhoneBook::getCurrentSlot(void) const
{
	return (_slot);
}

int		PhoneBook::getUsedSlots(void) const
{
	return (_used);	
}

void	PhoneBook::AddContact(void)
{
	int			idx;

	std::cout << " ==== ݁⋆⭒˚.⋆ Adding a new contact... ݁⋆⭒˚.⋆" << std::endl;
	idx = _slot % MAX_CONTACTS;
	this->_Contacts[idx].setIndex(idx);
	this->_Contacts[idx].setFirstName();
	this->_Contacts[idx].setLastName();
	this->_Contacts[idx].setNickname();
	this->_Contacts[idx].setPhoneNumber();
	this->_Contacts[idx].setThatSecret();
	this->_slot = (_slot + 1) % MAX_CONTACTS;
	if (this->_used <= 7)
		this->_used++;
	std::cout << "⋆⭒˚.⋆ Contact successfully added! ݁⋆⭒˚.⋆" << std::endl;
}

void	PhoneBook::DisplayContacts(void)
{
	int		idx;

	std::cout << "+============ CONTACT INFOS =============+" << std::endl;
	std::cout << " __________ __________ __________ __________" << std::endl;
	std::cout << "|     INDEX|";
	std::cout << "FIRST NAME|";
	std::cout << " LAST NAME|";
	std::cout << "       AKA|" << std::endl;
	std::cout << " __________ __________ __________ __________" << std::endl;
	idx = 0;
	while (idx < this->_slot)
	{
		std::cout << "|         " << this->_Contacts[idx].getIndex() << "|";
		std::cout << this->_Contacts[idx].getFirstName() << "|";
		std::cout << this->_Contacts[idx].getLastName() << "|";
		std::cout << this->_Contacts[idx].getNickname() << "|" << std::endl;
		std::cout << " __________ __________ __________ __________" << std::endl;
		idx++;
	}
}

// void	PhoneBook::SearchIndex(void)
// {
// 	std::string		index;
// 	int				idx;

// 	std::cout << "Enter index for more information (0-7): ";
// 	getline(std::cin, index);
// 	if (!myTools::isNumeric(index))
// 	{
// 		std::cout << RED << "Invalid index. ";
// 		std::cout << "Please input a number between 0 & " << this->_slot;
// 		std::cout << DEFAULT;
// 		return ;
// 	}
// 	idx = atoi(index.c_str());
// 	if (idx < 0 || idx > 7)
// 	{
// 		std::cout << RED << "Invalid index. Index out of range.";
// 	}
// }
