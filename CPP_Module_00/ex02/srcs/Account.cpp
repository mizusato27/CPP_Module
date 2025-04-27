/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:57:23 by mizusato          #+#    #+#             */
/*   Updated: 2025/04/27 11:39:09 by mizusato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

// todo
// ・ログが逆になる
// ・Linuxでの時間表示非対応

// initiate static values
int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

// get the total number of the accounts
int		Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

// get the total amount of the money of all accounts
int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

// get the total number of deposits
int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

// get the total number of withdrawals
int		Account::getNbWithdrawals(void)
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

// Constructor with initating deposit
Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;

	_displayTimestamp();

	std::cout
	<< "index:" << _accountIndex << ";"
	<< "amount:" << checkAmount() << ";"
	<< "created"
	<< std::endl;
}

// Destructor
Account::~Account(void)
{
	_displayTimestamp();

	std::cout
	<< "index:" << _accountIndex << ";"
	<< "amount:" << checkAmount() << ";"
	<< "closed" <<
	std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();

	std::cout
	<< "index:" << _accountIndex << ";"
	<< "p_amount:" << checkAmount() << ";"
	<< "deposit:" << deposit << ";";

	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout
	<< "amount:" << checkAmount() << ";"
	<< "nb_deposits:" << _nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();

	std::cout
	<< "index:" << _accountIndex << ";"
	<< "p_amount:" << checkAmount() << ";";

	if (checkAmount() < withdrawal)
	{
		std::cout
		<< "withdrawal:refused"
		<< std::endl;
		return (false);
	}
	else
	{
		std::cout
		<< "withdrawal:" << withdrawal << ";";

		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;

		std::cout
		<< "amount:" << checkAmount() << ";"
		<< "nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
		return (true);
	}
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();

	std::cout
	<< "index:" << _accountIndex << ";"
	<< "amount:" << checkAmount() << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals
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
