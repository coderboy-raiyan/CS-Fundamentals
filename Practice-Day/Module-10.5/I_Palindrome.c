# include <stdio.h>
# include <string.h>

int main(){
    char a[1000];
    int ans = 0;
    scanf("%s", a);
    int j = strlen(a) - 1, i = 0;
    while (i < j)
    {
      if(a[i] == a[j]){
        ans = 1;
      }else{
        printf("NO");
        break;
      }
      i++;
      j--;
    }
    if(ans > 0){
        printf("YES");
    }
    
    return 0;
}