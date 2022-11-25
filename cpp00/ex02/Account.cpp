#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
};

int	Account::getTotalAmount( void ) {
    return _totalAmount;
};

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
};

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
};

void	Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_amount = initial_deposit;
	_accountIndex = getNbAccounts();
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ';';
	std::cout << "total:" << getTotalAmount() << ';';
	std::cout << "deposits:" << getNbDeposits() << ';';
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

int	Account::checkAmount(void) const
{
	return _amount;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << "depsoit:" << deposit << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_depsoits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	if (checkAmount() - withdrawal > 0)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << "withdrawal:" << withdrawal << ';';
		std::cout << "amount:" << _amount << ';';
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
}