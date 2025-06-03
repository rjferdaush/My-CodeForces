#include <stdio.h>
int main() 
{
    int n,m,max,count=0;
    scanf("%d %d",&n , &m);

    int ar[n];

    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        
    }
    max=ar[m-1];
    for(int i=0;i<n;i++){
        if(max<=ar[i] && 0<ar[i]){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}