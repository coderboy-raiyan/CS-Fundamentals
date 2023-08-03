#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr1[5] = {5, 6, 7, 8, 9};
    int arr2[8] = {10, 14, 28, 87, 98, 100, 110, 112};
    int newArr[5 + 8];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < 5 && j < 8)
    {
        if (arr1[i] <= arr2[j])
        {
            newArr[k] = arr1[i];
            i++;
        }
        else
        {
            newArr[k] = arr2[j];
            j++;
        };
        k++;
    };
    while (i < 5)
    {
        newArr[k] = arr1[i];
        i++;
        k++;
    };
    while (j < 8)
    {
        newArr[k] = arr2[j];
        j++;
        k++;
    };
    for (int i = 0; i < (5 + 8); i++)
    {
        cout << newArr[i] << " ";
    }

    return 0;
}
