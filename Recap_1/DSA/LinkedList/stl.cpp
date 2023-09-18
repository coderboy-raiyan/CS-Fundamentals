#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    for (auto it : myList)
    {
        cout << it << endl;
    }
    return 0;
}
