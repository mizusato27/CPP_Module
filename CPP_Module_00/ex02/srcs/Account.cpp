/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:57:23 by mizusato          #+#    #+#             */
/*   Updated: 2025/04/27 01:19:56 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

// initiate static values
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructor with initating deposit
Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();

	std::cout
	<< "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "created"
	<< std::endl;
}

// Destructor
Account::~Account(void)
{
	_displayTimestamp();

	std::cout
	<< "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "closed" <<
	std::endl;
}

// get the total number of the accounts
int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

// get the total amount of the money of all accounts
int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

// get the total number of deposits
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

// get the total number of withdrawals
int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

// display information of all accounts
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();

	std::cout
	<< "accounts:" << getNbAccounts() << ";"
	<< "total:" << getTotalAmount() << ";"
	<< "deposits" << getNbDeposits() << ";"
	<< "withdrawals" << getNbWithdrawals()
	<< std::endl;
}

// display timestamp in the correct format
void	Account::_displayTimestamp(void)
{
	time_t		now;
	struct tm	time_now;

	now = std::time(0);
	time_now = *std::localtime(&now);

	std::cout << "["
	<< time_now.tm_year + 1900
	<< std::setw(2) << std::setfill('0') << time_now.tm_mon + 1
	<< std::setw(2) << std::setfill('0') << time_now.tm_mday
	<< "_"
	<< std::setw(2) << std::setfill('0') << time_now.tm_hour
	<< std::setw(2) << std::setfill('0') << time_now.tm_min
	<< std::setw(2) << std::setfill('0') << time_now.tm_sec
	<< "] ";
}
