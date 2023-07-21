# include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int sum[m+1], val = 0;
    for (int i = 0; i < m+1; i++)
    {
        sum[i] = 0;
    }
    
    while (scanf("%d", &val) != EOF)
    {
        sum[val]++;
    }
    for (int i = 1; i < m+1; i++)
    {
        printf("%d\n", sum[i]);
    }
    
    
    return 0;
}