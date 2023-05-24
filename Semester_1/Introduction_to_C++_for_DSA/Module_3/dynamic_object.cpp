# include <bits/stdc++.h>

using namespace std;

class CarModel {
    public :
    char name[100];
    int model;

    CarModel(char * n, int m){
     strcpy(name, n);
     model = m;
    }
};

int main(){
    char name[100] = "Range Rover vogue";
    CarModel * toyota = new CarModel(name, 2023);
    cout << toyota->name;
    delete toyota;
    return 0;
}

