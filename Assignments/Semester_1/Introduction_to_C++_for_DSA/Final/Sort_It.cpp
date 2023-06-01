# include <bits/stdc++.h>

using namespace std;

class Students{
    public :
    int id;
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

bool customSort(Students a, Students b){
    if(a.eng_marks + a.math_marks == b.math_marks +  b.eng_marks){
        return a.id < b.id;
    }
    return a.eng_marks + a.math_marks > b.math_marks +  b.eng_marks;
}

int main(){
    int n;
    cin >> n;
    Students sectionB3[n];
    for (int i = 0; i < n; i++)
    {
       cin >> sectionB3[i].nm >> sectionB3[i].cls >> sectionB3[i].s >> sectionB3[i].id >> sectionB3[i].math_marks >> sectionB3[i].eng_marks;
    }
    sort(sectionB3, sectionB3+n, customSort);
    for (int i = 0; i < n; i++)
    {
       cout <<  sectionB3[i].nm << " " << sectionB3[i].cls << " " <<  sectionB3[i].s << " " << sectionB3[i].id << " " << sectionB3[i].math_marks << " " << sectionB3[i].eng_marks << endl;
    }
    
    return 0;
}

