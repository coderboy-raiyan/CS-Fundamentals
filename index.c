# include <stdio.h>

// Insert Array
int main(){
    int n;
    scanf("%d", &n);
    int nums[n+1];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &nums[i]);
    }
    int val = 0, idx = 0;
    scanf("%d %d", &idx, &val);

    for (int i = n+1; i >= idx; i--)
    {
      nums[i] = nums[i-1];
    }

    nums[idx] = val;

    for (int i = 0; i < n+1; i++)
    {
      printf("%d\n", nums[i]);
    }
    return 0;
}

