
#include <iostream>
using namespace std;

int power(unsigned int base, unsigned int exp)
{
    int result = 1;

    for (int i = 1; i <= exp; i++)
    {
        result *= base;
    }


    return result;

}

int main()
{
    int base, exp;

    cout << "enter base and exponent values";
    cin >> base >> exp;
    cout << "your number " << exp << " strength " << power(base, exp);

}