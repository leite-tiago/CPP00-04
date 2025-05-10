/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 20:02:21 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/11 00:02:28 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iomanip>
# include <iostream>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	bool exists;

  public:
	Contact();
	~Contact();
	void create_contact(std::string first_name, std::string last_name,
		std::string nick_name, std::string phone_number,
		std::string darkest_secret);
	void print_phone_book();
	void print_contact();
	bool check_contact();
};

#endif
