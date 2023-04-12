# include <stdio.h>

// 1. Two eyes, One body
// 2. Two eyes, one mouth, one body,
// 3. One eyes, One body, One mouth

int main(){
    long long int n, m, k, count = 0, total;
    scanf("%lld %lld %lld", &n, &m, &k);
    if(n <= 0 || m <= 0 || k <= 0){
        printf("%d", 0);
        return 0;
    }

   if (n < k && n < m){
        count = n;
        printf("%lld", count);
   }else if(m < n && m < k){
        count+= m;
        k-=m;
        n-=m;
        count += (n / 2 < k ? (n / 2) : k);
        printf("%lld", count);
   }else{
        count+=k;
        n-=k;
        m-=k;
        printf("%lld", count);
   }
    

    return 0;
}