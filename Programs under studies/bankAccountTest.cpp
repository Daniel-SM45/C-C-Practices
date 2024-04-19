#include<iostream>
#define _CLEAR_SCREEN system("cls")
int main ()
{

	double deposit  = 0.0;
	double withdraw = 0.0;
	double balance  = 500;

	int option = 0;
	char exit;

	do {

		std::cout << " 1 - Deposit\n 2 - Withdraw\n";
		std::cout << "\n Chose a option >> ";
		std:: cin >> option;
		_CLEAR_SCREEN;

		switch (option) {

			case (1):

				std::cout << " Deposit a amount >>> ";
				std::cin >> deposit;

				balance += deposit;

				std::cout << "\n Your account has " <<  balance << " dollars";
				break;

			case (2):

				std::cout<<" Withdraw a amount >>> ";
				std::cin >> withdraw;

				if (withdraw > balance) {

					std::cout << "Not enough cash available to withdraw!";
				}
				else {
					balance -= withdraw;

					std::cout << "You withdrawed " << withdraw
					          << " dollars. " << "Now your account has "
					          << balance << " dollars";
				}

				break;
		}
	}
	while(option != 4);


	return 0;
}