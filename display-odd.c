#include<stdio.h>
void main(){
    int a[10],n,i,esum=0,osum=0,diff;
    printf("limit:");
    scanf("%d",&n);
    printf("element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1){
            printf("%d ",a[i]);
        }
    }
    
}
