#include <stdio.h>
int main() 
{
    int n,count=0;
    scanf("%d",&n);

    int ar[n*3];
    for(int i=0;i<n;i++){
        if(ar[i]==1){
            count++;
        }
    }

    for(int i=count;i<0;i--){
        if(count>=n*2 || (count)){
            printf("%d",n);
        }
        else if (){
            /* code */
        }
        
        
    }

    return 0;
}