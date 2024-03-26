#include<stdio.h>
void main(){
    int a[10],n,i,l;
    printf("limit:");
    scanf("%d",&n);
    printf("element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            printf("%d ",a[i]);
            l=a[i];
        }
    }
}
