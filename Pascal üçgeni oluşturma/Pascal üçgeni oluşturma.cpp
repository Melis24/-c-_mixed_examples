// Pascal üçgeni oluşturma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
	int linesnumb, number = 1, space;

	cout << "enter number of lines";
	cin >> linesnumb;

	for (int i = 0; i < linesnumb; i++)
	{

		for (int space = 1; space < linesnumb - i; space++)
		{
			cout << " ";


		}
		for (int j = 0; j <= i; j++)
		{

			if (j == 0 || i == 0)
			{
				number = 1;
			}
			else
			{
				number = number * (i - j + 1) / j;
			}

			cout << number;
		}

		cout << endl;



	}


}

