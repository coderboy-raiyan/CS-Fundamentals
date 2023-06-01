# include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int firstSum = 0;
    int SecondSum = 0;
    while (n--)
    {
        string num;
        cin >> num;
        int leng = num.size(), i =0;
        while (i < leng)
        {
            if(i < num.size()/2){
                int numA = num[i] - '0';
                firstSum+=numA;
            }else{
                int numB = num[i] - '0';
                SecondSum+=numB;
            }
            i++;
        }
        if(firstSum == SecondSum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;;
        }
        firstSum = 0;
        SecondSum = 0;
    }
    
    return 0;
}

