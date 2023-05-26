# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int result = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        while (num % 2 == 0)
        {
            count++;
            num /=2;
        }

        result = max(count, result);
        count = 0;
        
        
    }
    cout << result;
    
    return 0;
}

