// 2'nin kuvveti mi kontrol etme.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;


int main()
{
    
    int number;
    bool control =false;

    cout << "Enter to a number:";
    cin >> number;

    while (number >1)
    {
       
        if (number % 2== 0)
        {
            number /= 2;
        }
        else
        {
            control = true;
            break;
        }

    }

    if (control)
    {
        cout << "The number entered is not a power of two.";
    }
    else
    {
        cout << "The number entered is a power of two.";
    }


}

