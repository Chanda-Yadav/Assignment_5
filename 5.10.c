#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter the number whose table you want to print");
    scanf("%d",&n);
    while(i<=10)
    {

        printf("%d*%d=%d\n",n,i,(n*i));
        i++;;
    }



}



