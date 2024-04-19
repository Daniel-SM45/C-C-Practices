#include<iostream>
using namespace std;

int main()
{
	int numbers [3];

	for (int idx = 0; idx <= 2; idx++) {
		cout << ">>> ";
		cin >> numbers[idx];
	}

	int max = numbers [0];

	if (numbers[1] > max)
		max = numbers[1];
	
	if (numbers[2] > max)
		max = numbers[2];
			
	cout << "The largest numbers is " << max << endl;

	return 0;
}