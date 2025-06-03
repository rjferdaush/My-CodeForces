#include <stdio.h>
int main() 
{
    int n,count_2=0;
    scanf("%d",&n);
    int ar[n][3];

    for(int i=0;i<n;i++){
      for(int j=0;j<3;j++){
        scanf("%d",&ar[i][j]);
      }
    }

    for(int i=0;i<n;i++){
      int count_1=0;
      for(int j=0;j<3;j++){
        if(i==i){
          if(ar[i][j]==1){
            count_1++;
          }      
      }
        
      }
      if(count_1>=2){
        count_2++;
      }
    }
    printf("%d",count_2);
    return 0;
  }