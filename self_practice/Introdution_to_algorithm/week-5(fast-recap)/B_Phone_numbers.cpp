#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string phoneNumber;
    cin >> phoneNumber;

    string result;

    // Handle the first group of two or three digits
    int groupSize = n % 2 == 0 ? 2 : 3;
    for (int i = 0; i < groupSize; i++)
    {
        result += phoneNumber[i];
    }

    // Continue dividing the remaining digits into groups
    for (int i = groupSize; i < n; i += 2)
    {
        result += '-';
        result += phoneNumber[i];
        if (i + 1 < n)
        {
            result += phoneNumber[i + 1];
        }
    }

    cout << result << endl;

    return 0;
}
