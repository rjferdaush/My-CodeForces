#include <stdio.h>
int main(){
    int ar[5][5],row,col,ans_1=0,ans_2=0,ans_3=0,ans_4=0;
   
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        scanf("%d",&ar[i][j]);
    }
    }
    
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        // printf("%d",ar[i][j]);
        if(ar[i][j]==1){
          // printf("%d %d",i,j);
          row = i;
          col = j;
      }
    }
  }
  
  if(row>=2){
    ans_1=row-2;
    // printf("%d",ans_1);
  }
  if(col>=2){
    ans_2=col-2;
    // printf("%d",ans_2);
  }
  if(row<=1){ 
    ans_3=2-row;
    // printf("%d",ans_3);
  }
  if(col<=1){ 
    ans_4=2-col;
    // printf("%d",ans_4);
  }
  
  printf("%d",ans_1+ans_2+ans_3+ans_4);
}