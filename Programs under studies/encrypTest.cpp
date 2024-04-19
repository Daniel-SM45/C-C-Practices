#include<iostream>
using namespace std;

int main ()
{
	char userWords[50];
	int ASCII {128};
	cout << ">>>: ";
	cin >> userWords;

	for (int idx = 0; (idx <= ASCII && userWords[idx] != '\0'); idx++ ) {
		userWords[idx] += 4;
	} cout << userWords;
	
}