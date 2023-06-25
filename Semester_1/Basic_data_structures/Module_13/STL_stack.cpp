#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> nums;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        nums.push(val);
    }
    while (!nums.empty())
    {
        cout << nums.top() << " ";
        nums.pop();
    }

    return 0;
}
