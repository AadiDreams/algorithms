#include <stdio.h>
int main()
{
	int a[20],n,v,i,b,e,m;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter the values in ascending order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search value: ");
	scanf("%d",&v);
	b=0;
	e=n-1;
	m=(b+e)/2;
	while(b<=e && a[m]!=v)
	{
		if(v<a[m])
		{
			e=m-1;
		}
		else
		{
			b=m+1;
		}
		m=(b+e)/2;
	}
	if(a[m]==v)
	{
		printf("%d found\n",v);
	}
	else
	{
		printf("%d not found\n",v);
	}
return 0;
}
