#include<stdio.h>
void sort(char a[]){
    int i,j,n=0;
    char t;
    for(i=0;a[i];i++)
        n++;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
}
void main(){
    char a[]="mug",b[]="gum";
    int i,j=0,l=0,f=1;
    sort(a);
    sort(b);
    for (i=0;a[i];i++)
    {
        if(a[i]!=b[i]){
            f=0;
        }
    }
    if(f==1){
          printf("anagram");
    }
    else{
        printf("not");
    }
}
