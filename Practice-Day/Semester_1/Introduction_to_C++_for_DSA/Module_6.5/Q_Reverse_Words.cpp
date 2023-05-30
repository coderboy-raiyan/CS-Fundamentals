# include <bits/stdc++.h>

using namespace std;

int main(){
    string ch;
    getline(cin,ch);
    stringstream ss(ch);
    string word;
    string newStr;
    int i = 0;
    while (ss >> word)
    {
        int j = word.size() - 1;
        while (i < j)
        {
            char temp = word[i];
            word[i] = word[j];
            word[j] = temp;
            i++;
            j--;
        }
        newStr+=word+" ";
        i = 0;
    }
    newStr.pop_back();
    cout << newStr;
    return 0;
}

