#include<stdio.h>
int main()
{
    int a,b,c;
    addition(getA(),getB());
    subtraction(getA(),getB());
    multiplication(getA(),getB());
    division(getA(),getB());
    modulus(getA(),getB());
    Increment(getA(),getB());
    decrement(getA(),getB());
    assign(getA(),getB());
    addasign(getA(),getB());
    subassign(getA(),getB());
    multiassign(getA(),getB());
    divassign(getA(),getB());
    equalto(getA(),getB());
     notequalto(getA(),getB());
    greaterthan(getA(),getB());
    lessthan(getA(),getB());
    greaterthanequal(getA(),getB());
    lessthanequal(getA(),getB());
    ANDprogram(getA(),getB());
    ORprogram(getA(),getB());
    NOT(getA(),getB());
    return 0;
}
int getA()
{
    int a;
    printf("\nEnter the value of a:",a);
    scanf("%d",&a);
    return a;
}
int getB()
{
    int b;
    printf("\nEnter the value of b:",b);
    scanf("%d",&b);
    return b;
}
int addition (int x,int y)
{
    int z=x+y;
    printf("\n addition value is...%d",z);
    return 0;
}
int subtraction(a,b)
{
    int c=a-b;
    printf("\n subtract value is:%d",c);
    return 0;
}
int multiplication (int x,int y)
{
int z=x*y;
printf("\n\n Multiplication value is...%d",z);
return 0;
}
int division (int x,int y)
{
float d=(float)x/y;
printf("\n\n division value is...%f",d);
return 0;
}
int modulus (int x,int y)
{
int z=x%y;
printf("\n\n Modulus value is...%d",z);
return 0;
}
int Increment (int x,int y)
{
x++;
printf("\n\n Increment value is...%d",x);
return 0;
}
int decrement (int x,int y)
{
y--;
printf("\n\n decrement value is...%d",y);
return 0;
}
int assign (int x,int y)
{
int z=x;
printf("\n\n assign value is...%d",z);
return 0;
}
int addasign (int x,int y)
{
 x+=2;
printf("\n\n addition assign value is...%d",x);
return 0;
}
int subassign (int x,int y)
{
    y-=1;
    printf("\n\n sub assign value is....%d",y);
    return 0;
}
int multiassign (int x,int y)
{
    x*=3;
    printf("\n\n multi assign value is....%d",x);
    return 0;
}
int divassign (int x,int y)
{
    y/=3;
    printf("\n\n div assign value is....%d",y);
    return 0;
}
int equalto (int x,int y)
{
    y=x;
    printf("\n\n equal to is....%d",x);
    return 0;
}
int notequalto(int x,int y)
{
    x!=y;
    printf("\n\n Not equal to value is....%d",x);
    return 0;
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
   return 0;

 }

int lessthanequal(int x,int y)
 {

   printf("\n\n less than equal value is....%d",x>=y);
   return 0;
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
