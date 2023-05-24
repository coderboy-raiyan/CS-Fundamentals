# include <bits/stdc++.h>

using namespace std;

class Student {
    public :
    char name[100];
    int roll;
};

int main(){
    Student johnSnow;
    char name[100] = "John Snow";
    strcpy(johnSnow.name, name);
    johnSnow.roll = 20;
    cout << johnSnow.name;
    return 0;
}

