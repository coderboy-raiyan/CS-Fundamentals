# include <iostream>
# include <utility>
# include <string.h>

using namespace std;

int main(){
    char ch[100];
    cin.getline(ch, 100) >> ch;
    cout << strlen(ch);
    return 0;
}

