/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrandr <malrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:42:52 by malrandr          #+#    #+#             */
/*   Updated: 2026/07/01 14:42:57 by malrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

# define RED		"\033[31m"
# define GREEN		"\033[92m"
# define BLUE		"\033[96m"
# define CYAN 		"\033[96m"
# define DEFAULT 	"\033[39m"
# define ORANGE		"\033[93m"

namespace	myTools
{
	int		isNumeric(std::string str);
	int		isEmpty(std::string str);
	int		isPrintable(std::string str);
};

class Contact
{
	private:
		int				_idx;
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_number;
		std::string		_darkestSecret;
	public:
		Contact( void );
		~Contact( void );
		int				getIndex(void) const;
		std::string		getFirstName(void) const;
		std::string		getLastName(void) const;
		std::string		getPhoneNumber(void) const;
		std::string		getNickname(void) const;
		std::string		getThatSecret(void) const;
		void			setIndex(int idx);
		void			setFirstName(void);
		void			setLastName(void);
		void			setNickname(void);
		void			setPhoneNumber(void);
		void			setThatSecret(void);
		void			DisplayContactInfo(void);
};

#endif