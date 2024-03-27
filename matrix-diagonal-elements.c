#include<stdio.h>
void main(){
    int a[10][10],i,j,m,n;
    printf("limits:");
    scanf("%d%d",&m,&n);
    printf("elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                printf("%d ",a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
