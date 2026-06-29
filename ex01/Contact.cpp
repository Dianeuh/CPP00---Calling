/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:42:32 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/29 17:08:25 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_idx = -1;
	std::cout << GREEN << "Contact slot created!" << DEFAULT << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << RED << "Contact deleted." << DEFAULT << std::endl;
	return ;
}

int		Contact::getIndex(void) const
{
	return (_idx);
}

std::string		Contact::getFirstName(void) const
{
	return (_firstName);
}

std::string		Contact::getLastName(void) const
{
	return (_lastName);
}

std::string		Contact::getPhoneNumber(void) const
{
	return (_number);
}

std::string		Contact::getNickname(void) const
{
	return (_nickname);
}

std::string		Contact::getThatSecret(void) const
{
	return (_darkestSecret);
}

void	Contact::setIndex(int idx)
{
	this->_idx = idx;
	return ;
}

void	Contact::setFirstName(void)
{
	std::string		firstName;

	std::cout << "What's your name ? (FIRST name) > ";
	getline(std::cin, firstName);
	if (firstName.empty())
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "Do you not know your name ? 😔" << std::endl;
		std::cout << DEFAULT;
		this->setFirstName();
	}
	this->_firstName = firstName;
}

void	Contact::setLastName(void)
{
	std::string		lastName;

	std::cout << "What's your name ? (LAST name) > ";
	getline(std::cin, lastName);
	if (lastName.empty())
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "Just input anything, really." << std::endl;
		std::cout << DEFAULT;
		this->setLastName();
	}
	this->_lastName = lastName;
}

void	Contact::setNickname(void)
{
	std::string		nick;

	std::cout << "How can we also call you ? (Nickname) > ";
	getline(std::cin, nick);
	if (nick.empty())
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "Even Bob works just fine." << std::endl;
		std::cout << DEFAULT;
		this->setNickname();
	}
	this->_nickname = nick;
}

void	Contact::setPhoneNumber(void)
{
	std::string		number;

	std::cout << "Enter your phone number > ";
	getline(std::cin, number);
	if (number.empty())
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "You don't know who needs to call you." << std::endl;
		std::cout << DEFAULT;
		this->setPhoneNumber();
	}
	if (!myTools::isNumeric(number))
	{
		std::cout << RED << "Invalid phone 𝘯𝘶𝘮-𝘣𝘦𝘳. ";
		std::cout << "Please input only numeric characters." << std::endl;
		std::cout << DEFAULT;
		this->setPhoneNumber();
	}
	this->_number = number;
}

void	Contact::setThatSecret(void)
{
	std::string		secret;

	std::cout << "Your darkest secret ?" <<std::endl;
	std::cout << "Or some fun fact > ";
	getline(std::cin, secret);
	if (secret.empty())
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "I know you have things to say.(⊙ v ⊙)" << std::endl;
		std::cout << DEFAULT;
		this->setThatSecret();
	}
	this->_darkestSecret = secret;
}

void	Contact::DisplayContactInfo(int idx)
{
	std::cout << "      CONTACT INFO AT #" << idx << std::endl;
	std::cout << "========================" << std::endl;
	std::cout << "First Name:" << this->_firstName << std::endl;
	std::cout << "Last Name:" << this->_lastName << std::endl;
	std::cout << "Nickname:" << this->_nickname << std::endl;
	std::cout << "Phone number:" << this->_number << std::endl;
	std::cout << "🤫 Darkest Secret:" << this->_darkestSecret << std::endl;
}
