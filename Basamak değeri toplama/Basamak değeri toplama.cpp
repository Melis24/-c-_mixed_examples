// Basamak değeri toplama.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int sum_digits(int value)
{
	int remainder[10];
	int counter = 0;

	while (value > 0)
	{
	
		remainder[counter] = value % 10;
		value /= 10; 

		counter++;

		if (value < 10)
		{

			remainder[counter] = value;
			
		}


	}
	
	int total = 0;
	for (int i = 0; i < counter; i++)
	{
		total +=remainder[i];
	}

	return total;
}

int main()
{
	int number;
	cout << "enter the  a number";
	cin >> number;

	cout << number << "  the sum of the digits of the number  " << sum_digits(number)<<endl;




}
