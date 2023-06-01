# include <bits/stdc++.h>

using namespace std;

class Students{
    public :
    string nm;
    int cls;
    char s;
    int id;
};

int main(){
    int n;
    cin >> n;
    Students sectionB3[n];
    for (int i = 0; i < n; i++)
    {
       cin >> sectionB3[i].nm >> sectionB3[i].cls >> sectionB3[i].s >> sectionB3[i].id;
    }
    int i = 0, j = n-1;
    Students temp;
    
    while (i < j)
    {
        temp.id = sectionB3[i].id;
        sectionB3[i].id = sectionB3[j].id;
        sectionB3[j].id = temp.id;
        i++;
        j--;
    }
    
    for (int i = 0; i < n; i++)
    {
       cout <<  sectionB3[i].nm << " " << sectionB3[i].cls << " " <<  sectionB3[i].s << " " << sectionB3[i].id << endl;
    }
    
    return 0;
}

