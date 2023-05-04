# include <stdio.h>
# include <string.h>

int is_palindrome(char ch[10], int n){
    int i = 0;
    int j = n-1;
    int isPalindrome = 0;
    while (i < j)
    {
        if(ch[i] == ch[j]){
            isPalindrome = 1;
        }
        i++;
        j--;
    }
    return isPalindrome;
    
}

int main(){
    char ch[10];
    scanf("%s", &ch);
    int strLen = strlen(ch);
    int isPalindrome = is_palindrome(ch, strLen);
    if(isPalindrome){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}