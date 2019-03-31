#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[100005];
int main()
{
    long long n,m,i,r,mid,l;
    scanf("%lld",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%lld",&m);
    sort(a+1,a+n+1);
    for (i=1;i<=n;i++)
    {
        r=n;l=i+1;
        while (l<=r)
        {
            mid=(l+r)/2;
            if (a[mid]==m-a[i])
                break;
            else if (a[mid]>m-a[i])
                r=mid-1;
            else
                l=mid+1;
        }
        if (a[mid]==m-a[i])
        {
            printf("%d %d",a[i],a[mid]);
            return 0;
        }
    }
    printf("No");
}
