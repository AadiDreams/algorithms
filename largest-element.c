#include<stdio.h>
void main()
{
    int i,l,s,a[5];
    printf("enter:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    s=0;
    for(i=0;i<=5;i++)
    {
        if(a[i]>a[i+1])
        {
            l=a[i];
        }
        
    }
    printf("largest=%d",l);


}
