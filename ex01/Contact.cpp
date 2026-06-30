/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:42:32 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/30 16:03:17 by malrandr         ###   ########.fr       */
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

	if (std::cin.eof())
		return ;
	std::cout << "What's your name ? (FIRST name) > ";
	getline(std::cin, firstName);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	if (firstName.empty() || myTools::isEmpty(firstName))
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "Do you not know your name ? 😔" << std::endl;
		std::cout << DEFAULT;
		this->setFirstName();
	}
	if (!myTools::isPrintable(firstName))
	{
		std::cout << RED << "Invalid input. ";
		std::cout << "Come on, speak our language!" << std::endl;
		std::cout << DEFAULT;
		this->setFirstName();
	}
	else
		this->_firstName = firstName;
}

void	Contact::setLastName(void)
{
	std::string		lastName;

	if (std::cin.eof())
		return ;
	std::cout << "What's your name ? (LAST name) > ";
	getline(std::cin, lastName);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	if (lastName.empty() || myTools::isEmpty(lastName))
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "Just input anything, really." << std::endl;
		std::cout << DEFAULT;
		this->setLastName();
	}
	if (!myTools::isPrintable(lastName))
	{
		std::cout << RED << "Invalid input. ";
		std::cout << "Come on, speak our language!" << std::endl;
		std::cout << DEFAULT;
		this->setFirstName();
	}
	else
		this->_lastName = lastName;
}

void	Contact::setNickname(void)
{
	std::string		nick;

	if (std::cin.eof())
		return ;
	std::cout << "How can we also call you ? (Nickname) > ";
	getline(std::cin, nick);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	if (nick.empty() || myTools::isEmpty(nick))
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "Even Bob works just fine." << std::endl;
		std::cout << DEFAULT;
		this->setNickname();
	}
	if (!myTools::isPrintable(nick))
	{
		std::cout << RED << "Invalid input. ";
		std::cout << "Come on, speak our language!" << std::endl;
		std::cout << DEFAULT;
		this->setFirstName();
	}
	else
		this->_nickname = nick;
}

void	Contact::setPhoneNumber(void)
{
	std::string		number;

	if (std::cin.eof())
	return ;
	std::cout << "Enter your phone number > ";
	getline(std::cin, number);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	if (number.empty() || myTools::isEmpty(number))
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
	else
		this->_number = number;
}

void	Contact::setThatSecret(void)
{
	std::string		secret;

	if (std::cin.eof())
		return ;
	std::cout << "Your darkest secret ? Or some fun fact." << std::endl;
	std::cout << "> ";
	getline(std::cin, secret);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}
	if (secret.empty() || myTools::isEmpty(secret))
	{
		std::cout << RED << "Field cannot be empty. ";
		std::cout << "I know you have things to say.(⊙ v ⊙)" << std::endl;
		std::cout << DEFAULT;
		this->setThatSecret();
	}
	else
		this->_darkestSecret = secret;
}

void	Contact::DisplayContactInfo()
{
	std::cout << "==========================" << std::endl;
	std::cout << "      CONTACT INFO AT #" << this->_idx << std::endl;
	std::cout << "==========================" << std::endl;
	std::cout << "FIRST NAME:	" << this->_firstName << std::endl;
	std::cout << "LAST NAME:	" << this->_lastName << std::endl;
	std::cout << "NICKNAME:	" << this->_nickname << std::endl;
	std::cout << "PHONE NUMBER: 	" << this->_number << std::endl;
	std::cout << "^⎚-⎚^ DARKEST SECRET: " << this->_darkestSecret << std::endl;
}
