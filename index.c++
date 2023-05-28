# include <bits/stdc++.h>

using namespace std;

class Student {
    public :
    char name[100];
    int roll;

    Student(char * s_name, int s_roll){
        strcpy(name, s_name);
        roll = s_roll;
    };
};

Student * fun(){
    char name[100] = "Raiyna";
    Student * std1 = new Student(name, 6182);
    return std1;
}

int main(){
    Student * std1 = fun();
    cout<< std1->name;
    return 0;
}

