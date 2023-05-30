# include <bits/stdc++.h>

using namespace std;

class Student{
    public :
    string name;
    int roll;
}; 

int main(){
    Student arr[2];
    for (int i = 0; i < 2; i++)
    {
       getline(cin, arr[i].name);
       cin >> arr[i].roll;
       cin.ignore();
    }
    for (int i = 0; i < 2; i++)
    {
      cout << arr[i].name << " " << arr[i].roll << endl;
    }
    
    return 0;
}

