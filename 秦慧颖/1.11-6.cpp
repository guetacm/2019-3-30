#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>

using namespace std;
int n,m,a[100001],s=0,t,con;

bool ff(int x)
{
    int sum=0,mon=1;
    for(int i=1;i<=n;i++)
    {
        if(sum+a[i]>x)
        {
            sum=a[i];
            mon++;
        }
        else
        sum+=a[i];
   }
   if(mon<=m)
    return 1;
   else
    return 0;
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        t+=a[i];
        if(a[i]>s)s=a[i];
    }
    int l=s,r=t,mid;
    while(l<=r)
    {
        mid=(l+r)>>1;
        if(ff(mid))
        {
            con=mid;
            r=mid-1;
        }
        else
        l=mid+1;

    }
    printf("%d",con);
}

