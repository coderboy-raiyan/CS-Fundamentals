# include <bits/stdc++.h>

using namespace std;

class Person {
    public:
    char name[100];
    float height;
    int age;

    Person(char * p_name, float p_height, int p_age){
        strcpy(name, p_name);
        height = p_height;
        age = p_age;
    };
};



int main(){
    char name1[100] = "Daemon targaryen";
    char name2[100] = "Aegon(6th) targaryen";
    Person * cast1 = new Person(name1, 6.2, 28);
    Person * cast2 = new Person(name2, 5.5, 21);
    if(cast1->age > cast2->age){
        cout << cast1->name;
    }else{
        cout << cast2->name;
    }
    return 0;
}