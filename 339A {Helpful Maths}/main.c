#include <stdio.h>
int main() 
{
    char n[1000];
    scanf("%s",n);
    // printf("%s",n);
    int ar[100];
    for(int i=0;n[i]!='\0';i=i+2){    
        ar[i]=n[i]-'0';
        
        // printf("%d\n",ar[i]);
    }
    
    
    // for(int i=0;i<100;i++){
    //     printf("%d\n",ar[i]);
    // }
    
    
    // for(int i=0;n[i]!='\0';i=i+2){
    //   for(int j=100;j<0;j--){
    //     if(n[i]==j){
    //         printf("%c",n[i]);
    //     }
    //   }
    // }
    return 0;
}