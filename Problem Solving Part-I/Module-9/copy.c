# include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int nums1[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums1[i]);
    }

    int m;
    scanf("%d", &m);
    int nums2[m];
    for (int i = 0; i < m; i++)
    {
       scanf("%d", &nums2[i]);
    }
    
    int ans[m+n], j = 0, i = n;
    for (int i = 0; i < n; i++)
    {
      ans[i] = nums1[i];
    }
    
    while (j < m)
    {
        ans[i] = nums2[j];
        i++;
        j++;
    }
    
    for (int i = 0; i < n+m; i++)
    {
       printf("%d ", ans[i]);
    }
    
   
    
    return 0;
}