#include<stdio.h>

int add_int(int a,int b)
{
    return a+b;
}

float add_float(float a,float b)
{
    return a+b;
}
int sub_int(int a,int b)
{
    return a-b;
}

int main(){
    int a=5;
    int b=13; 
    float fa=5.5;
    float fb=13.2;
    printf("%d + %d = %d\n",a,b,add_int(a,b));
    printf("%f +%f = %f\n",fa,fb,add_float(fa,fb));
    printf("%d - %d = %d\n",a,b,sub_int(a,b));
    return 0;
}