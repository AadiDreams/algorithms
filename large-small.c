#include<stdio.h>
void main(){
    int a[10],n,i,l,s;
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
        }
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    printf("small=%d\nlarge=%d",s,l);
}
