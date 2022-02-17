
#include <iostream>
using namespace std;

int is_sorted(int arr[], int size)
{
    for (int i = 0; i < size; i++) // 1 2 5 4 6
    {
        for (int j = i; j < size; j++) 
        {
            if (arr[i] < arr[j])
            {
                return 1;
            }
            else
            {
                return 0;
                break;
            }

        }

    }


}


int main()
{
    int array[5], n;
    n = 5;

    cout << "enter the elements of the array";

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    if (is_sorted(array, n))
    {
        cout << "array sequential";
    }
    else
    {
        cout << "array is not sequential";
    }

}

