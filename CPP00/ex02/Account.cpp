/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:52:07 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/22 00:04:05 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = getNbAccounts();
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}


Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount" << _amount;
	std::cout << ";closed" << std::endl;
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawls:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus()const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawls:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposits:" << deposit;
	std::cout << ";amount:" << _amount + deposit;
	std::cout << ";nb_deposits:" << &getNbDeposits << std::endl;
	Account::_totalNbDeposits++;
	Account::_nbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int  withdrawal)
{
	if (_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << _amount - withdrawal;
	std::cout << ";nb_withdeawals:" << &getNbWithdrawals << std::endl;
	Account::_totalNbWithdrawals++;
	Account::_nbWithdrawals++;
	_amount -= withdrawal;
	return (true);
}


int Account::checkAmount()const
{
	return (_amount);
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

void	Account::_displayTimestamp(void)
{
	time_t	curr_time = time (nullptr); //  gets the current calendar time and stores it in curr_time 
	std::cout << std::put_time(localtime(&curr_time), "[%Y%m%d_%H%M%S] "); // trasfer to string format n put_time
}