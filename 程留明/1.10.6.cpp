#include<stdio.h>
int main()
{
	int a[10],b[10];
	int i,j=0,t=0,temp;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
	    if(a[i]%2!=0)
		{
			b[j++]=a[i];
			t++;
		}
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			b[j++]=a[i];
	}
	for(i=0;i<t-1;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(b[j]>b[i])
			{
				temp=b[j];b[j]=b[i];b[i]=temp;
			}
		}
	}
	for(i=t;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(b[j]<b[i])
			{
				temp=b[j];b[j]=b[i];b[i]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
		printf("%d ",b[i]);
	printf("\n");
	return 0;
}







