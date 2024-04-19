#include<iostream>
#include<string>

class Bank {
	private:

		std::string accountNumber;
		double balance;

	public:

		Bank(std::string accNumber, double iniBalance): accountNumber(accNumber), balance(iniBalance) {}

		double setDeposit(double setDepo)
		{
			balance += setDepo;
			std::cout << "Balance: "<< balance;
			return balance;
		}
		double setWithdraw(double withdraw)
		{

			if(withdraw > balance) {
				std::cout << "Not enough cash to withdraw."
			}
			else {
				std::cout <<"Withdraw successful. Cash available: " << balance;
				balance -= withdraw;
			}
			return balance;
		}
};

int main()
{
	Bank account("SG-908",600);
	account.setDeposit(2000);
	account.setWithdraw(600);
	return 0;
}