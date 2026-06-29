/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 10:57:55 by malrandr          #+#    #+#             */
/*   Updated: 2026/06/12 15:17:12 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	shout(char *sound)
{
	char	a;
	int		i;

	i = 0;
	while (sound[i])
	{
		a = toupper(sound[i]);
		std::cout << a;
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		shout(argv[i]);
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
