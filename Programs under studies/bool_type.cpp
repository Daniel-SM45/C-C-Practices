#include<iostream>

int main()
{
	int  user_input_age = {0};
	int  allowed_age = {18};

	bool is_the_user_under_age = user_input_age >= allowed_age  ;

	// is_velocity_higher ? std::cout << "Yes!" : std::cout << "No"; // Ternário
	std::cout << "Your age: ";
	std::cin >> user_input_age;

	if (is_the_user_under_age) {
		
		std::cout << "\nYes!";
	}
	else if (is_the_user_under_age >= allowed_age){
		std::cout << "\nNo";
	}
		

	return 0;
}