# include <stdio.h>

int summation(int x, int y){
    int total = x+y;
    return total;
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int total = summation(a,b);
    printf("%d", total);
    return 0;
}


int countStr(void){
    char ch;
    int strLeng = 0;
    while (scanf("%c", &ch) != EOF)
    {
        strLeng++;
    }
    return strLeng;
}

int main(){
    int strLeng = countStr();
    printf("%d", strLeng);
    return 0;
}


void ascendingSort(int * nums, int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if(nums[i] > nums[j]){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
           }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    
    
}

int main(){
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    ascendingSort(nums, n);
    return 0;
}

void small_to_capital(void){
    char ch;
    scanf("%s", &ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("%c", ch-32);
    }
}

int main(){
    small_to_capital();
    return 0;
}