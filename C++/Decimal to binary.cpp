#include <iostream>
using namespace std;

int main()

{

	int dec, bin[16], i = 0, j = 0;	//dec and bin to store number and ints binary equivalent and i&j are	//for index maintaining 

	cout << "Enter a decimal number\n";

	cin >> dec;

	while (dec > 0)	//calculating the binary equivalent and storing it in the array

	{
		bin[i] = dec % 2;

		dec = dec / 2;

		++i;
	}

	cout << "Binary Equivalent:";	//printing the array in reverse order

	for (j = i - 1; j >= 0; --j)

		cout << bin[j];

	return 0;

}
