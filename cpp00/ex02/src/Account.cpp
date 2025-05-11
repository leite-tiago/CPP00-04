/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 00:13:57 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/11 16:41:34 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

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
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts = getNbAccounts() + 1;
	_totalAmount += _amount;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:"
		<< _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:"
		<< _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;

	_amount += deposit;
	_nbDeposits++;

	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << ";deposit:" << deposit
		<< ";amount:" << _amount << ";nb_deposits:"
		<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;

	if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;

		std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << _amount << ";nb_withdrawal"
		<< _nbWithdrawals << std::endl;

		return (true);
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:"
		<< _amount << ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(nullptr);
	std::tm *ltm = std::localtime(&now);

	std::cout << "["
	          << std::put_time(ltm, "%Y%m%d_%H%M%S")
	          << "]";
}

Account::Account()
{
}
