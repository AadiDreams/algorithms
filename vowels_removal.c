#include<stdio.h>
void main(){
    char s[]="hello word",a[100];
    int i,j,k,l=0,c=0;

    for(i=0;s[i];i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            continue;
        
        a[l++]=s[i];
    }
    a[l]='\0';
    printf("%s",a);
}
