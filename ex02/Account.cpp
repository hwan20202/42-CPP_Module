
	#include "Account.hpp"
    #include <iostream>
    
	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

	Account::Account( int initial_deposit )
    {
        _accountIndex = Account::getNbAccounts();
        _nbAccounts++;
        _totalAmount += initial_deposit;
        _amount = initial_deposit;
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "amount:" << _amount << ";";
        std::cout << "created" << std:: endl;   
    }

	Account::~Account( void )
    {
        //[19920104_091532] index:0;amount:47;closed
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "amount:" << _amount << ";";
        std::cout << "closed" << std:: endl;
    }

    int	Account::getNbAccounts( void ) // static
    {
        return (_nbAccounts);
    }

	int	Account::getTotalAmount( void ) // static
    {
        return (_totalAmount);
    }

	int	Account::getNbDeposits( void ) // static
    {
        return (_totalNbDeposits);
    }

	int	Account::getNbWithdrawals( void ) // static
    {
        return (_totalNbWithdrawals);
    }

	void	Account::displayAccountsInfos( void ) // static
    {
        //time_stamp
        std::cout << "accouts:" << getNbAccounts() << ";";
        std::cout << "total:" << getTotalAmount() << ";";
        std::cout << "deposits:" << getNbDeposits() << ";";
        std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
    }

    void	Account::makeDeposit( int deposit )
    {
        //time_stamp
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "deposit:" << deposit << ";";
        std::cout << "amount:" << (_amount += deposit) << ";";
        std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
        _totalNbDeposits++;   
    }

	bool	Account::makeWithdrawal( int withdrawal )
    {
        //time_stamp
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        if (_amount < withdrawal)
        {
            std::cout << "withdrawal:refused" << std::endl;
            return (false);
        }
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << (_amount -= withdrawal) << ";";
        std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
        _totalNbWithdrawals++;
        return (true);
    }

	int		Account::checkAmount( void ) const // const의 의미는 함수 내에서 값을 변경하지 않는다는 의미
    {
        //구현하지 않아도 무방
        return (0);
    }

	void	Account::displayStatus( void ) const // const의 의미는 함수 내에서 값을 변경하지 않는다는 의미
    {
        //time_stamp
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "amount:" << _amount << ";";
        std::cout << "deposits:" << _nbDeposits << ";";
        std::cout << "withdrawals:" << _nbWithdrawals << std::endl;        
    }

	void	Account::_displayTimestamp( void )
    {
        //time stamp
    }
