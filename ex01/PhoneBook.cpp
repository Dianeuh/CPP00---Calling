/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:39:45 by malrandr          #+#    #+#             */
/*   Updated: 2026/07/01 14:44:43 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_slot = 0;
	this->_used = 0;
	std::cout << GREEN << " ₊˚ ☎︎₊˚✧ PhoneBook was created !₊˚ ☎︎₊˚✧" << DEFAULT << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << RED << "₊˚ ☎︎₊˚✧ Bye bye, my Awesome Phonebook . ₊˚ ☎︎₊˚✧" << std::endl;
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

	if (this->_used == 0)
	{
		std::cout  << BLUE << "PhoneBook is still empty. ";
		std::cout << "Add in some friends to get started! :]" << std::endl;
		std::cout << DEFAULT;
		return ;
	}
	std::cout << "Pick a number between 0 & " << this->_used - 1 << " for more info: ";
	getline(std::cin, index);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	if (index.empty() || myTools::isEmpty(index) || !myTools::isNumeric(index))
	{
		std::cout << RED << "No index was input. ";
		std::cout << ORANGE << "Tap SEARCH again to show contact info." << std::endl;
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
