/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizusato <mizusato@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:57:23 by mizusato          #+#    #+#             */
/*   Updated: 2025/04/26 23:51:56 by mizusato         ###   ########.fr       */
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

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{

}

void	Account::_displayTimestamp(void)
{

}
