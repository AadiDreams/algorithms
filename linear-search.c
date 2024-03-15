#include <stdio.h>
int main()
{
	int a[20],n,i,v,f=0;
	printf("Enter the limit:");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter search value: ");
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{
		if(a[i]==v)
		{
			printf("%d is found in position %d\n",v,i+1);
			f=1;
		}
	}
	if(f==0)
	{
		printf("%d not found\n",v);
	}
return 0;
}
