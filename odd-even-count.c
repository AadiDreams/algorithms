#include<stdio.h>
void main()
{
    int i,o=0,e=0,a[5];
    printf("enter:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("odd=%d",o);
    printf("even=%d",e);

}
