# include <bits/stdc++.h>

using namespace std;

class Student{
    public :
    string name;
    int roll;
    int marks;
}; 

int main(){
    Student arr[2];
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < 2; i++)
    {
       getline(cin, arr[i].name);
       cin >> arr[i].roll >> arr[i].marks;
       cin.ignore();
    }
    for (int i = 0; i < 2; i++)
    {
      if(arr[i].marks > mx.marks){
        mx = arr[i];
      }
    }
    cout << mx.name << " " << mx.marks;
    
    return 0;
}

