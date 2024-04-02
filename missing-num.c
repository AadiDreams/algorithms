#include<stdio.h>
void main(){
    int a[10],n,i,sum=0,t;
    printf("limit:");
    scanf("%d",&n);
    printf("element:\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    t=(n*(n+1))/2;
    printf("missing=%d",t-sum);
}
