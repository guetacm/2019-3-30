#include<stdio.h>
int main()
{
	int a[1000]={0},b[1000]={0};
	int N,i,j,x=0,temp;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];a[i]=a[j];a[j]=temp;
			}
		}
	}
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-1;
				N=N-1;
			}
		}
	}
	printf("%d\n",N);
	for(i=0;i<N+1;i++)
	{
		if(a[i]!=-1)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
    return 0;
}
