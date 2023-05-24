# include <stdio.h>
# include <string.h>

// int main(){
//     char a[10000001];
//     scanf("%s", a);
//     int sum[26] = {0};
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//        sum[a[i] - 'a']++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//        if(sum[i] > 0){
//             printf("%c : %d\n", i + 'a', sum[i]);
//        }
//     }
   
//     return 0;
// }

/* More optimized */
/* If I use this way I can avoid the time limit error because array and string in the main function can only hold 10^5 maximum value */

# include <stdio.h>

int main(){
    char ch;
    int sum[26] = {0};
    while (scanf("%c", &ch) != EOF)
    {
      sum[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
      if(sum[i] > 0){
          printf("%c : %d\n", i+'a', sum[i]);
      }
    }
    return 0;
}