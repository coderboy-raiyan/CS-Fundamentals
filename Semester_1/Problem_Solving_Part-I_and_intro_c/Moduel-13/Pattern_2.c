# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int s = n-1, k=0; 
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < s; j++)
      {
        printf(" ");
      }
      for (int j = 0; j <= k; j++)
      {
        printf("*");
      }
      
      s--;
      k+=2;
      printf("\n");
      
    }
    
    return 0;
}

// Reverse pattern
int main(){
    int n;
    scanf("%d", &n);
    int s = 0, k= (2*n) - 1; // just calculate the last column using (2 * n) -1 rules
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < s; j++)
      {
        printf(" ");
      }
      for (int j = 0; j < k; j++)
      {
        printf("*");
      }
      
      s++;
      k-=2;
      printf("\n");
      
    }
    
    return 0;
}