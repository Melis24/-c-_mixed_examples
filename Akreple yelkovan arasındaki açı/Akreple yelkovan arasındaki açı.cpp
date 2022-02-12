// Akreple yelkovan arasındaki açı.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int get_angle(int hour, int minute) 
{
	int pain;
	pain = abs(11 * minute - 60 * hour)/2;
	cout << "Angle between hour and minute hands=" << pain << endl;

	return pain;

}

int main()
{
   
	int hour, minute;
	cout << "enter the time in hours and minutes"<<endl;
	cin >> hour >> minute;

	if (hour == 13)
	{
		hour = 1;
	}
	if (hour == 14)
	{
		hour = 2;
	}
	if (hour == 15)
	{
		hour = 3;
	}

	if (hour == 16)
	{
		hour = 4;
	}

	if (hour == 17)
	{
		hour = 5;
	}

	if (hour == 18)
	{
		hour = 6;
	}

	if (hour == 19)
	{
		hour = 7;
	}

	if (hour == 20)
	{
		hour = 8;
	}
	if (hour == 21)
	{
		hour = 9;
	}
	if (hour == 22)
	{
		hour = 10;
	}
	if (hour == 23)
	{
		hour = 11;
	}
	
	get_angle(hour, minute);







}
