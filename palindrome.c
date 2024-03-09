#include<stdio.h>
void main()
{
    int n,rm,r=0,m;
    printf("Enter the number: ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        rm=n%10;
        r=r*10+rm;
        n=n/10;
    }
    printf("Reverse=%d",r);
    if(r==m)
    {
        printf("\nNumber is palindrome");
    }
    else
    {
        printf("\nNot palindrome");
    }
}
