#include<stdio.h>
void main()
{
    int n,i,j;
    printf("limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        for(j=0;j<=i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}

/*

   *
  ***
 *****

*/
