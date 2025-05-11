/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 00:13:57 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/11 12:26:50 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include <iostream>

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:"
		<< getTotalAmount() << ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_nbAccounts = getNbAccounts() + 1;
	_totalAmount += this->_amount;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	// TO-DO: add prints
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	return (false);
	// TO-DO: add prints
}

int		Account::checkAmount() const
{
	return (this->_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532]";
}

Account::Account()
{
}
