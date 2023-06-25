#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    list<int> nums;

    void push(int val)
    {
        nums.push_back(val);
    };
    void pop()
    {

        nums.pop_back();
    };
    int top()
    {
        return nums.back();
    };
    bool empty()
    {
        if (nums.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    int size()
    {
        return nums.size();
    }
};

int main()
{
    myStack nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        nums.push(val);
    }

    while (!nums.empty())
    {
        cout << nums.top() << endl;
        nums.pop();
    }

    return 0;
}
