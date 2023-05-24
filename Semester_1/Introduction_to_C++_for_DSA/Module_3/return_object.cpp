# include <bits/stdc++.h>

using namespace std;

class Student {
    public :
    char name[100];
    int roll;
    char section;
    Student(char * n, int r, char s){
        strcpy(name, n);
        roll = r;
        section = s;
    }
};

Student fun(){
    char name[100] = "John Snow";
    Student student1(name, 450, 'B');
    return student1;
}

int main(){
    Student student1 = fun();
    cout << student1.name;
    return 0;
}

