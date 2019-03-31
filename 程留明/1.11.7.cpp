#include<stdio.h>
#define N 100000
int main()
{
    long int n,m;
	int i,j,t=0,temp,l,r;
	int a[N];
	scanf("%ld\n",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%ld",&m);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{   
			if(a[i]>a[j])
			{
				temp=a[i];a[i]=a[j];a[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		l=i+1;
		r=n-1;
		while(l<=r)
		{
			j=(l+r)/2;
    		if(a[i]+a[j]==m)
			{
    			t=1;
    			break;
			}
    		else if(a[i]+a[j]>m)
    			r=j-1;
    		else
	    		l=j+1;
		}
		if(t)
		{
			printf("%d %d\n",a[i],a[j]);
			break;
		}
	}
	if(t==0)
		printf("NO\n");
	return 0;
}


