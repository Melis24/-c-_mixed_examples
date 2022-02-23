// Dizi içinde en çok yinelenen sayıyı bulma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    int sayac = 0,temp=0,tekrareden_sayi;

    int array1[10];
    
    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        array1[i] = rand() % 50;
    }

    
    for (int j = 0; j < 10; j++)
    {
        cout << array1[j] << " ";
    }
   
    cout << endl;
    

    for (int k = 0; k < 10; k++)
    {
        for (int m = k; m < 10; m++)
        {
            if (array1[k] == array1[m])
            {
                sayac++;
           
        
            }
       
        }
       
        if (sayac > temp)
        {
            temp = sayac;
            tekrareden_sayi = array1[k];


        }
        sayac = 0;
        

    }
    cout << "tekrar eden sayi=" << tekrareden_sayi;

  

}

