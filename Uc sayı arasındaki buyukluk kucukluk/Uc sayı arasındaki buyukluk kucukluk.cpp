// Uc sayı arasındaki buyukluk kucukluk.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{

	int number1, number2, number3;

	cout << "enter three numbers:";
	cin >> number1 >> number2 >> number3;


		if (number1 > number2 && number1 > number3)
		{
			cout << number1 << " > ";
			if (number2 > number3)
			{
				cout << number2 << " > " << number3;
			}
			else
			{
				cout << number3 << " > " << number2;
			}
		}
		else if (number2 > number1 && number2 > number3)
		{
			cout << number2 << " > ";
			if (number1 > number3)
			{

				cout << number1 << " > " << number3;
			}
			else
			{
				cout << number3 << " > " << number1;
			}
		}
		else if (number3 > number1 && number3 > number2)
		{
			cout << number3 << " > ";
			if (number1 > number2)
			{
				cout << number1 << " > " << number2;
			}
			else
			{
				cout << number2 << " > " << number1;
			}
		}

		

	

}

