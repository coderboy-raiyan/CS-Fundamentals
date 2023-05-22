# include <stdio.h>

int main(){
    int nums[5] = {10, 20, 30, 40, 50};
    printf("%p\n", &nums);
    printf("%d", *(2+nums));
    return 0;
}