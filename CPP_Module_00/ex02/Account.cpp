#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

// ************************************************************************** //
//                               static member                                //
// ************************************************************************** //

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << " ";
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

// ************************************************************************** //
//                               member method                                //
// ************************************************************************** //

void	Account::makeDeposit( int deposit ) {
    _displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << (_amount += deposit) << ";";
    std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
    _totalAmount += deposit;
    _totalNbDeposits++;   
}

bool	Account::makeWithdrawal( int withdrawal ) {
    _displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << (_amount -= withdrawal) << ";";
    std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int		Account::checkAmount( void ) const {
    return 0;
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;        
}

void	Account::_displayTimestamp( void ) {
    struct tm curr_tm;
    time_t curr_time = time(nullptr);

    localtime_r(&curr_time, &curr_tm);

    int curr_year = curr_tm.tm_year + 1900;
    int curr_month = curr_tm.tm_mon + 1;
    int curr_day = curr_tm.tm_mday;
    int curr_hour = curr_tm.tm_hour;
    int curr_minute = curr_tm.tm_min;
    int curr_second = curr_tm.tm_sec;

    std::cout << "[" << curr_year << std::setfill('0') << std::setw(2) << curr_month
                << std::setw(2) << curr_day << "_" << std::setw(2) << curr_hour
                << std::setw(2) << curr_minute << std::setw(2) << curr_second << "]";
}

// ************************************************************************** //
//                        constructor and destructor                          //
// ************************************************************************** //

Account::Account( int initial_deposit ) {
    _accountIndex = Account::getNbAccounts();
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    _displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std:: endl;   
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << " ";
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std:: endl;
}
