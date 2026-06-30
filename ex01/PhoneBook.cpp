/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:39:45 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/30 14:03:20 by malrandr         ###   ########.fr       */
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
}

void	PhoneBook::prettyPrint(std::string field)
{
	int		len;
	int		i;

	i = 0;
	len = field.length();
	std::cout << "|";
	if (len > 10)
		std::cout << field.substr(0,9) << ".";
	else
	{
		std::cout << std::setw(10);
		std::cout << field;
	}
}

void	PhoneBook::DisplayContacts(void)
{
	int				idx;

	std::cout << "+============== CONTACTs INFOS ==============+" << std::endl;
	std::cout << " __________ __________ __________ __________" << std::endl;
	std::cout << "|     INDEX|";
	std::cout << "FIRST NAME|";
	std::cout << " LAST NAME|";
	std::cout << "  NICKNAME|" << std::endl;
	std::cout << " __________ __________ __________ __________" << std::endl;
	idx = 0;
	while (idx < this->_used)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << idx;
		this->prettyPrint(_Contacts[idx].getFirstName());
		this->prettyPrint(_Contacts[idx].getLastName());
		this->prettyPrint(_Contacts[idx].getNickname());
		std::cout << "|" << std::endl;
		std::cout << " __________ __________ __________ __________" << std::endl;
		idx++;
	}
}

void	PhoneBook::SearchIndex(void)
{
	std::string		index;
	int				idx;

	std::cout << "Pick a number between 0 & " << this->_used - 1 << " for more info: ";
	if (!getline(std::cin, index))
		return ;
	if (!myTools::isNumeric(index))
	{
		std::cout << RED << "Try again! ";
		std::cout << RED << "We only asked you to enter one 𝘯𝘶𝘮-𝘣𝘦𝘳." << std::endl;
		std::cout << DEFAULT;
		return ;
	}
	idx = std::atoi(index.c_str());
	if (idx < 0 || idx >= this->_used)
	{
		std::cout << RED << "Invalid index. Index out of range." << std::endl;
		std::cout << DEFAULT;
		return ;
	}
	this->_Contacts[idx].DisplayContactInfo();
	return ;
}
