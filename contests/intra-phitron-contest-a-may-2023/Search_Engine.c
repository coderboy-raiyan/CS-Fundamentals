# include <stdio.h>

int main(){
    int test;
    scanf("%d", &test);
    int s;
    int count = 1;
    while (count <= test)
    {
        int size;
        int flag = 0, pos = 0;
        scanf("%d", &size);
        int nums[size];
        for (int i = 0; i < size; i++)
        {
           scanf("%d", &nums[i]);
        }
        scanf("%d", &s);
        for (int i = 0; i < size; i++)
        {
           if(nums[i] == s){
             flag = 1;
             pos = i;
             break;
           }
        }
        if(flag){
            printf("Case %d: %d\n", count, pos+1);
        }else{
            printf("Case %d: Not Found\n", count);
        }
        count++;
    }
    
    return 0;
}