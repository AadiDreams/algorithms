#include<stdio.h>
void main(){
    char a[]="hi how are you",b[100];
    int i,j,k,l=0,c=0;
    for(i=0;a[i];i++){
        l++;
    }

    for(i=l-1;i>=0;i--){
        if(a[i]==' '){
            for(k=j-1;k>=0;k--){
                printf("%c",b[k]);
            }
            printf(" ");
            j=0;
        }
        else{
            b[j++]=a[i];
        }
    }
    for(k=j-1;k>=0;k--){
                printf("%c",b[k]);
            }
            printf(" ");
            j=0;
}
