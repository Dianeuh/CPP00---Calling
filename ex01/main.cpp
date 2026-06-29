/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 16:24:01 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/29 18:04:36 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Welcome(void)
{
	std::cout << BLUE << "                           .--." << std::endl;
	std::cout << "                           |  |" << std::endl;
	std::cout << "                           |  |" << std::endl;
	std::cout << "                           |  |" << std::endl;
	std::cout << "                           |  |" << std::endl;
	std::cout << "          _.-----------._  |  |" << std::endl;
	std::cout << "       .-'      __       `-.  |" << std::endl;
	std::cout << "     .'       .'  `.        `.|" << std::endl;
	std::cout << "    ;         : 42 :          ;" << std::endl;
	std::cout << "    |         `.__.'          |" << std::endl;
	std::cout << "    |   ____            ____  |" << std::endl;
	std::cout << "    |     ♡    (˙ᵕ˙)   ♡      |" << std::endl;
	std::cout << "    | .---------------------. |" << std::endl;
	std::cout << "    | |                     | |" << std::endl;
	std::cout << "    | |  =================  | |" << std::endl;
	std::cout << "    | |  |               |  | |" << std::endl;
	std::cout << "    | |  |   [WELCOME]   |  | |" << std::endl;
	std::cout << "    | |  |     [TO]      |  | |" << std::endl;
	std::cout << "    | |  |  [MY AWESOME] |  | |" << std::endl;
	std::cout << "    | |  | [ PHONEBOOK ] |  | |" << std::endl;
	std::cout << "    | |  |               |  | |" << std::endl;
	std::cout << "    | |  =================  | |" << std::endl;
	std::cout << "    | |                     | |" << std::endl;
	std::cout << "    | `---------------------' |" << std::endl;
	std::cout << "    |                         |" << DEFAULT << std::endl;
}

void	Commands(void)
{
	std::cout << CYAN << "===========================================" << std::endl;
	std::cout << "Enter one of these three commands:" << std::endl;
	std::cout << "ADD: adds a new contact." << std::endl;
	std::cout << "SEARCH: display contact(s) info." << std::endl;
	std::cout << "EXIT: well, exit." << std::endl;
	std::cout << "===========================================" << std::endl;
	std::cout << DEFAULT;
}

int	main(void)
{
	PhoneBook		AwesomePB;
	std::string		cmd;
	Contact			AContact;

	Welcome();
	Commands();
	while (cmd.compare("EXIT") != 0)
	{
		std::cout << "ִֶָ. ࣪ ִֶָ🪽་༘࿐ > ";
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			AwesomePB.AddContact();
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			AwesomePB.DisplayContacts();
		}
	}
}
