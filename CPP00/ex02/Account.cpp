/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:11:19 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/25 09:57:54 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t	t;
	struct tm *date;
	std::time(&t);
	date = localtime(&t);
	std::cout <<  "[" << date->tm_year + 1900;
	if (date->tm_mon < 10)
		std::cout << "0";
	std::cout << date->tm_mon + 1;
	if (date->tm_mday < 10)
		std::cout << "0";
	std::cout << date->tm_mday << "_";
	if (date->tm_hour < 10)
		std::cout << "0";
	std::cout << date->tm_hour;
	if (date->tm_min < 10)
		std::cout << "0";
	std::cout << date->tm_min;
	if (date->tm_sec < 10)
		std::cout << "0";
	std::cout << date->tm_sec << "] ";
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:"<< getNbDeposits() << ";withdrawals:"<< getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )/*constructeur*/
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount = Account::_totalAmount + initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	return ;
}

Account::~Account( void )/*Destructeur*/
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	return ;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_amount = this->_amount + deposit;
	this->_nbDeposits++;
	Account::_totalAmount = Account::_totalAmount + deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount - withdrawal < 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
		this->_amount = this->_amount - withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount = Account::_totalAmount - withdrawal;
		Account::_totalNbWithdrawals++;
		return (true);
	}
}

int	Account::checkAmount( void ) const
{
	return (1);
}
