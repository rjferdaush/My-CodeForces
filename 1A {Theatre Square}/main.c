#include<stdio.h>

long long int next_num(double a){
    long long int b = (long long int)a;

    if(a > (double)b){
        return b+1;
    }
    else{
        return b;
    }
}


int main(){
    double x,y,a;
    scanf("%lf %lf %lf",&x,&y,&a);
    double len = x/a;
    double wid = y/a;
    // printf("%f\n",len);
    long long int len_upd=next_num(len);
    long long int wid_upd=next_num(wid);

    long long int mul = len_upd*wid_upd;
    printf("%lld",mul);
    
}