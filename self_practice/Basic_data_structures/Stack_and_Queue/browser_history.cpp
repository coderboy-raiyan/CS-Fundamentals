#include <bits/stdc++.h>

using namespace std;

class BrowserHistory
{
public:
    stack<string> history, future;
    string current;
    BrowserHistory(string homepage)
    {
        current = homepage;
    };
    void visit(string url)
    {
        history.push(current);
        current = url;
        future = stack<string>();
    };
    string back(int steps)
    {
        int i = 0;
        while (i < steps && !history.empty())
        {
            future.push(current);
            current = history.top();
            history.pop();
            i++;
        };
        return current;
    }
    string forward(int steps)
    {
        int i = 0;
        while (i < steps && !future.empty())
        {
            history.push(current);
            current = future.top();
            future.pop();
            i++;
        };
        return current;
    }
};

int main()
{
    BrowserHistory chromeHistory("google.com");
    chromeHistory.visit("fb.com");
    chromeHistory.visit("yt.com");
    string now = chromeHistory.back(2);
    cout << now;
    return 0;
}
