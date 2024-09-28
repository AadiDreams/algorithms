#include<stdio.h>
void main(){
    char s[]="shipped;in-transit;out-for-delivery;delivered",a[100];
    int i,j,l=0;

    for(i=0;s[i];i++){
        l++;
    }
    for(i=0;s[i];i++){
        if(s[i]==';'){
            j=0;
        }
        else{
            a[j++]=s[i];
        }
    }

    for(i=0;i<j;i++){
        printf("%c",a[i]);
    }
}
