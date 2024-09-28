#include<stdio.h>
void main(){
    int i,l=0,num[100];
    char mob[]="+91 906 15 25 783";
    for(i=0;mob[i];i++){
        l++;
    }

    for(i=0;mob[i];i++){
        if(mob[i]>='0' && mob[i]<='9'){
            num[l++]=mob[i];
        }
    }

    for(i=l-10;i<l;i++){
        printf("%c",num[i]);
    }
}
