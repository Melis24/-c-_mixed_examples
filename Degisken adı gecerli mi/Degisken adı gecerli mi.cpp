// Degisken adı gecerli mi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int is_legal( char names)
{

    if (names > 0 && names < 64|| names>91&&names<96)
    {
        cout << "not a valid name ";
        return 0;
    }
    else
    {
        cout << "a valid name";
        return 1;
    }




}



int main()
{
    char name;
    cout << " enter the name" << endl;
    cin >> name;

    is_legal(name);



}
