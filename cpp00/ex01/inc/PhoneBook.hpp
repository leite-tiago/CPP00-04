/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 20:02:24 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/11 00:02:39 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
};

#endif
