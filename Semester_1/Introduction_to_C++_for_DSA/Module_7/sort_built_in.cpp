# include <bits/stdc++.h>

using namespace std;

class Student{
    public :
    string name;
    int roll;
    int marks;
}; 

bool cmp(Student a , Student b){
    if(a.marks < b.marks){
            return true;
    }else{
        return false;
    }
};

int main(){
    Student arr[2];
    for (int i = 0; i < 2; i++)
    {
       getline(cin, arr[i].name);
       cin >> arr[i].roll >> arr[i].marks;
       cin.ignore();
    };
    
    sort(arr, arr+2, cmp);
    for (int i = 0; i < 2; i++)
    {
      cout << arr[i].name << " " << arr[i].marks << endl;
    }
   
    
    return 0;
}

