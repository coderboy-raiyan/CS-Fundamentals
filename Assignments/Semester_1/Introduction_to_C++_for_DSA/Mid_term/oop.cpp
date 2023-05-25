# include <bits/stdc++.h>

using namespace std;

class CarModel {
    public :
    char name[100];
    int model;
    int wheel;
    char type[10];

    CarModel(char * c_name, int c_model,int c_wheel, char * c_type){
        strcpy(name,c_name);
        strcpy(type, c_type);
        model = c_model;
        wheel = c_wheel;
    }
};

int main(){
    char name[100] = "Range rover autobiography";
    char type[10] = "Off-road";
    CarModel rangeRover = CarModel(name,2024, 4, type);
    cout << rangeRover.name;
    return 0;
}

