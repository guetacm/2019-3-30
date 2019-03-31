#include<stdio.h>
#define N 100000
int main()
{
	long int n;
	int i,j,temp,a[N],b[500];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];a[j]=a[i];a[i]=temp;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
				a[j]=-1;
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
    	if(a[i]!=-1&&j<500)
			b[j++]=a[i];
	}
	for(i=0;i<j;i++)
	{
		if(i<j-1)
			printf("%d ",b[i]);
    	else
			printf("%d",b[i]);
	}
	printf("\n");
	return 0;
}



	



