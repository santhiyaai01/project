#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10,b=6;
    printf("Value of a    :%d \n\t",a);
    printf("Address of    :%p \n \t",&a);
    printf("*********************** \n");
    printf("Value of b    :%d \n \t",b);
    printf("address of    :%p \n \t",&b);
     printf("*********************** \n");


    int *p=&a;
     printf("Value of p    :%p \n\t",p);
    printf("Address of p    :%p \n \t",&p);
     printf("Value stored in the address of p   :%d \n\t",*p);
      printf("*********************** \n");


      char s[25]="santhiya";
      printf("Enter the value s...%s\n",s);
      printf("Enter the address....%p\n",&s);
       printf("*********************** \n");

       char *r=" santhiya";
       printf("Enter the value p...%p\n",r);
      printf("Enter the address....%p\n",&r);
      printf("values stored of the address.............%s\n",r);
       printf("*********************** \n");


       char **q=&r;
         printf("enter the q.........................................%p\n",q);
        printf("enter the address....................................%p\n",&q);
         printf("values stored of the address.........................%p\n",*q);






    return 0;
}
