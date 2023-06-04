# include <bits/stdc++.h>

using namespace std;

class Student {
    public :
    string name;
    int roll;
    int totalNumber;
    
};

bool customSort(Student a, Student b){
    if(a.totalNumber == b.totalNumber){
        return a.roll < b.roll;
    }
    return a.totalNumber > b.totalNumber;
};

int main(){
    int n;
    cin >> n;
    Student b3[n];
    for (int i = 0; i < n; i++)
    {
       cin >> b3[i].name >> b3[i].roll >> b3[i].totalNumber;
    }
    sort(b3, b3+n, customSort);
    for (int i = 0; i < n; i++)
    {
           cout << b3[i].name << " " << b3[i].roll << " " << b3[i].totalNumber << endl;
    }
    
    
    return 0;
}

