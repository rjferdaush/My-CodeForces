#include <stdio.h>
int main() 
{
    int x=0,exta,j=0;
    char f[100],n[100];
    scanf("%s",f);

    for(int i=0;f[i]!='\0';i++){
        if(f[i]=='+'){
            x++;
        }
        if(f[i]!='+'){
            n[j]=f[i];
            j++;
        }
    }
    
    int ar[x+1];
    for(int i=0;n[i]!='\0';i++){
        ar[i]=n[i]-'0';
        
    }
    
    for(int i=0;i<x;i++){
      for(int j=i;j<x+1;j++){
        if(ar[i]<ar[j]){
            exta=ar[i];
            ar[i]=ar[j];
            ar[j]=exta;
        }
      }
    }


    for(int i=x;i>-1;i--){
        printf("%d",ar[i]);
        if(i>0){
            printf("+");
        }
    }
 
    return 0;
}