/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myTools.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:25:17 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/29 16:08:48 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		myTools::isNumeric(std::string str)
{
	int		i;

	i = 0;
	while (i < str.length())
	{
		if (!(isdigit(str[i])))
			return (0);
		i++;
	}
	return (1);
}

