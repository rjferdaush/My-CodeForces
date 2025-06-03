#include <stdio.h>
int main() 
{
    int n,sum_1=0,sum_2=0,sum_3=0;
    scanf("%d",&n);

    int ar[n][3];
    for(int i=0;i<n;i++){
      for(int j=0;j<3;j++){
        scanf("%d",&ar[i][j]);
      }
    }

    for(int i=0;i<n;i++){
      for(int j=0;j<3;j++){
        if(j==0){
            sum_1=ar[i][0]+sum_1;
        }
        if(j==1){
            sum_2=ar[i][1]+sum_2;
        }
        if(j==2){
            sum_3=ar[i][2]+sum_3;
            // printf("%d",sum_3);
        }
      }
    }
    // printf("%d %d %d\n",sum_1,sum_2,sum_3);
    if(sum_1==0&&sum_2==0 &&sum_3==0){
        // if(sum_2==sum_3){ 
        printf("YES");
        // }
    }
    else{
        printf("NO");
    }
    return 0;
}