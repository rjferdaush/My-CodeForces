#include<stdio.h>
#include<string.h>
int main(){
    int i,n,len;
    scanf("%d",&n);
    
    char ar[n][10000];
    
    for(i=0;i<n;i++){
        scanf("%s",ar[i]);
    }

    
    for(i=0;i<n;i++){
        len = strlen(ar[i]);
        if(len<=10 && len>0){
            printf("%s\n",ar[i]);
    
        }
        else{
            printf("%c%d%c\n",ar[i][0],len-2,ar[i][len-1]);
        }
    }
    
}