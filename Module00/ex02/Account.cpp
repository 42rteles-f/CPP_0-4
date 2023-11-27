/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:48:17 by rteles-f          #+#    #+#             */
/*   Updated: 2023/11/27 17:35:01 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void):
_accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {

	this->_accountIndex = Account::_nbAccounts;

	Account::_nbAccounts++;

	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
}

Account::Account(int initial_deposit):
_accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {

	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;

	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts++;

	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
}

Account::~Account(void) {
	
	Account::_nbAccounts--;

	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}
int	Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

int		Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << this->_amount + deposit << ";"
				<< "nb_deposits:" << this->_nbDeposits + 1 << std::endl;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	
	this->_amount += deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount) {
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

    std::cout	<< "withdrawal:" << withdrawal << ";"
				<< "amount:" << this->_amount << ";"
				<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return (true);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
    std::cout	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
    std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {

	time_t      time;
    struct tm   *stamp;

    std::time(&time);
    stamp = localtime(&time);

    std::cout << "[";
    std::cout << stamp->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << stamp->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << stamp->tm_mday << "_";
    std::cout << std::setw(2) << std::setfill('0') << stamp->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << stamp->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << stamp->tm_sec;
    std::cout << "] ";
}
