#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int d;
    printf("Enter value A is:");
    scanf("%d",&a);
    printf("Enter the value B is:");
    scanf("%d",&b);
    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);
    modulus(a,b);
    Increment(a,b);
    decrement(a,b);
    assign(a,b);
    addasign(a,b);
    subassign(a,b);
    multiassign(a,b);
    divassign(a,b);
    equalto(a,b);
     notequalto(a,b);
    greaterthan(a);
    lessthan(a,b);
    greaterthanequal(a,b);
    lessthanequal(a,b);
    ANDprogram(a,b);
    ORprogram(a,b);
    NOT(a,b);
    return 0;
}
int addition (int x,int y)
{
    int z=x+y;
    printf("addition value is...%d",z);
}

int subtraction (int x,int y)
{
    int z=x-y;
    printf("\n\nSubtraction value is...%d",z);
}
int multiplication (int x,int y)
{
int z=x*y;
printf("\n\n Multiplication value is...%d",z);
}
int division (int x,int y)
{
float d=(float)x/y;
printf("\n\n division value is...%f",d);
}
int modulus (int x,int y)
{
int z=x%y;
printf("\n\n Modulus value is...%d",z);

}
int Increment (int x,int y)
{
x++;
printf("\n\n Increment value is...%d",x);
}
int decrement (int x,int y)
{
y--;
printf("\n\n drecrement value is...%d",y);
}
int assign (int x,int y)
{
int z=x;
printf("\n\n assign value is...%d",z);
}
int addasign (int x,int y)
{
 x+=2;
printf("\n\n additionassign value is...%d",x);
}
int subassign (int x,int y)
{
    y-=1;
    printf("\n\n sub assign value is....%d",y);
}
int multiassign (int x,int y)
{
    x*=3;
    printf("\n\n multi assign value is....%d",x);
}
int divassign (int x,int y)
{
    y/=3;
    printf("\n\n div assign value is....%d",y);
}
int equalto (int x,int y)
{
    y=x;
    printf("\n\n equalto is....%d",x);
}
int notequalto(int x,int y)
{
    x!=y;
    printf("\n\n Not equal to value is....%d",x);
}
 int greaterthan(int a,int c)
 {
   while(c=a>4)
{
    printf("\n\n Greater than value is....%d",c);
    return 0;

}
 }
int lessthan(int b,int c)
 {
  while(c=b<15)
  {
   printf("\n\n less than value is....%d",c);
   return 0;

  }
 }
int greaterthanequal(int a)

    {
   printf("\n\n Greater than equal value is....%d",a>=3);

 }

int lessthanequal(int x,int y)
 {

   printf("\n\n less than equal value is....%d",x>=y);
 }

 int ANDprogram (int x,int y)
 {
    if (x > 3 && y < 15)
      {
          printf("\n the AND value is:%d",x);
      }
 }
int ORprogram (int x,int y)
{

     if( x > 3 || y > 5)
     {
          printf("\n the OR value is:%d",x);
     }
}
int NOT(int a,int b)
{
    printf("\n\nNOT value is...%d",!(a>10 && b<5));
}
