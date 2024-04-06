#include<stdio.h>
void main(){
    int a[10][10],i,j,m,n,f=0;
    printf("limits:");
    scanf("%d%d",&m,&n);
    printf("elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                if(a[i][j]!=1){
                    f=1;
                }
            }
            else{
                if(a[i][j]!=0){
                    f=1;
                }
            }
        }
    }
    if(f==0){
        printf("unit matrix");
    }
    else{
        printf("not unit matrix");
    }
}
