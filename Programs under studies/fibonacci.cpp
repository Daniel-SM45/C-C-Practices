#include<iostream>
using namespace std;

# define GRAPH ">>>"
# define SYS_SOUND '\a'

int fibbonaciFunction(int, int );

int main()
{
	int fibNumOne = {0};
	int fibNumTwo = {5};

	cout << GRAPH;
	 cin >> fibNumOne;
	 

	cout << SYS_SOUND << fibbonaciFunction(fibNumOne, fibNumTwo);
	return 0;
}
int fibbonaciFunction(int x, int y)
{
	if (x == y) {
		return x;
	}
	return x + fibbonaciFunction(x + 1, y);
}