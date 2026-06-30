/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myTools.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 13:25:17 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/30 10:55:05 by malrandr         ###   ########.fr       */
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

int		myTools::isEmpty(std::string str)
{
	int		i;

	i = 0;
	while (i < str.length())
	{
		if (!isblank(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		myTools::isPrintable(std::string str)
{
	int		i;

	i = 0;
	while (i < str.length())
	{
		if (!(isprint(str[i])))
			return (0);
		i++;
	}
	return (1);
}

