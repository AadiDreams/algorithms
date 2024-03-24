#include<stdio.h>
void main(){
    int a[10],n,i,l,s,li,si,temp;
    printf("limit:");
    scanf("%d",&n);
    printf("element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
            li=i;
        }
        if(a[i]<s)
        {
            s=a[i];
            si=i;
        }
    }
    temp=a[li];
    a[li]=a[si];
    a[si]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
