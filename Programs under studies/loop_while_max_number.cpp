#include <iostream>

using namespace std;

int main()
{

	int number;            /* temporary storage for the incoming numbers */

	cin >> number;         /* get the first value */

	int max = number;	   /* we will store the currently greatest number here */

	while (number != -1) { /* if the number is not equal to -1 we will continue */

		if (number > max)  /* is the number greater than max? */

			max = number;  /* yes – update max */

		cin >> number;     /* get next number */
	}

	cout << "The largest number is " << max << endl;/* print the largest number */
}