#include<stdio.h>
int main()
{
  int a,b,c,d;
  char operator;
  printf("Enter a value 2 or 3:");
  scanf("%d",&d);
if( d== 2) 
{
    printf("Enter a Value A:");
    scanf("%d",&a);
    printf("Enter a Value B:");
    scanf("%d",&b);
     printf("select operator:");
      scanf(" %c",&operator);
switch(operator)
{
case '+':
printf("Added the value is:%d",a+b);
break;
case '-':
printf("Subtract the value is:%d",a-b);
break;
case '*':
printf("Multiplaction the value is:%d",a*b);
break;
}

}
    else
{
    char op;
    printf("Enter a Value A:");
    scanf("%d",&a);
    printf("Enter a Value B:");
    scanf("%d",&b);
    printf("Enter a Value c:");
    scanf("%d",&c);
    
    printf("select operator");
    scanf(" %c",&op);

    switch(op)
    {
case '+':
printf("Added the value is:%d",a+b+c);
break;
case '-':
printf("Subtracted the value is:%d",a-b-c);
break;
case '*':
printf("Multiply the value is:%d",a*b*c);
break;
}
}
    return 0;
}







int main()
{
  int a,b,c,d;
  char operator;
  printf("Enter a value 2 or 3:");
  scanf("%d",&d);
if( d== 2) 
{
    printf("Enter a Value A:");
    scanf("%d",&a);
    printf("Enter a Value B:");
    scanf("%d",&b);
     printf("select operator:");
      scanf(" %c",&operator);