#include<stdio.h>
void  main(){
    int a=1,b=1,i,n;
    printf("limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i%2==0){
            printf("%d ",a);
            a=a+1;
        }
        else{
            printf("%d ",b);
            b=b+2;
        }
    }
}
