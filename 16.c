//Write a program to find the maximum of three numbers.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c)
    printf("%d is the greatest of three numbers", a);
    else if(b>c)
    printf("%d is the greatest of three numbers", b);
    else
    printf("%d is greatest of three numbers",c);

    return 0;
    
    }