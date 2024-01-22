#include<stdio.h>
struct myvalue
{
    int a;
    int d;
    char str1[15];
    char str2[20];

};
  int main()
{
    struct myvalue s3,s2,sum,Myself;
    s3.a=12;
    s2.a=29;
    sum.d=s3.a+s2.a;
    char str1[20];
    char str2[20];
    printf("\n my first value is:%d",s3.a);
    printf("\n My second value is:%d",s2.a);
    printf("\n Add the value is:%d",sum.d);
    strcpy(Myself.str2,"SANTHIYA");
    printf("\n Myself:%s",Myself.str2);
    return 0;

}
