#include<stdio.h>
#include<string.h>
int main() 
{
    int n,x=0;
    char bit[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
      scanf("%s",bit);
      if(strcmp(bit,"++X")==0 || strcmp(bit,"X++")==0 ){
        x++;
      }
      else if(strcmp(bit,"--X")==0 || strcmp(bit,"X--")==0 ){
        x--;
      }

    }

    printf("%d",x);

    return 0;
}