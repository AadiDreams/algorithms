#include<stdio.h>
void main(){
    char s[]="critical;normal;critical;normal;critical",a[100],b[]="critical";
    int i,j,k,l=0,c=0;

    for(i=0;s[i];i++){
        l++;
    }
    for(i=0;s[i];i++){
        if(s[i]==';'){
            a[j++]='\0';
            int f=1;
            for(k=0;b[k];k++){
                if(b[k]!=a[k]){
                    f=0;
                }
            }
            if(f==1){
                c++;
            }
            j=0;
        }
        else{
            a[j++]=s[i];
        }
    }
    a[j++]='\0';
            int f=1;
            for(k=0;b[k];k++){
                if(b[k]!=a[k]){
                    f=0;
                }
            }
            if(f==1){
                c++;
            }

    printf("%d",c);
}
