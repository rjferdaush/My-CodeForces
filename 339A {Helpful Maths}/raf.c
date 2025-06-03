#include <stdio.h>
int main() 
{
    int ar[5]={3,1,2,4,5};
    // int max=ar[0];
    int extra;

    for(int i=0;i<5-1;i++){
      for(int j=i;j<5;j++){
        if(ar[i]<ar[j]){
            extra=ar[i];
            ar[i]=ar[j];
            ar[j]=extra;
        }
      }
    }
    for(int i=0;i<5;i++){
        printf("%d",ar[i]);
    }
   


    return 0;
}