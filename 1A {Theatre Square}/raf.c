#include<stdio.h>

void next_num(float a){
    // int ans;
    int b = (int)a;

    if(a>(float)b){
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",b);
        printf("%d",b+1);
    }
    


}

int main(){
    float x,a,ans;
    scanf("%f",&x);
    //scanf("%d",&y);
    scanf("%f",&a);

    float len = x/a;
    // printf("%f",len);
    int i_t = (int)len;

    if (len > (float)i_t)
    {
        ans=i_t+1;
    }
    else
    {
        ans=i_t;
    }
    printf("%d",ans);
    

    // i_n= (float)len;

    // printf("%d",i_n+1);

    //printf("%f\n",len);

    // next_num(len);


    // printf("%d",ans);
}