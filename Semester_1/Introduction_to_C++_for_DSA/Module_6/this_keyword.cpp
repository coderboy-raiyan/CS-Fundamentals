# include <bits/stdc++.h>

using namespace std;

class Student {
    public:
    string name;
    string section;
    int cls;

    Student(string name, string section, int cls){
        this->name = name;
        this->section = section;
        this-> cls = cls;
    };
    void printRoll(){
        cout << cls;
    }
};

int main(){
    Student rakib("John snow", "B3", 11);
    Student daemon("Daemon targareyn", "B3", 12);
    daemon.printRoll();
    return 0;
}

