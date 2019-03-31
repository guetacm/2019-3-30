#include<iostream>
using namespace std;
int a[100007];
int check(int mid, int n, int m)
{
    int i,t=0;
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(sum+a[i]>mid)
        {
            sum=a[i];
            t++;
        }
        else sum+=a[i];
    }
    if(t>=m) return true;
    else return false;
}
int main()
{
    int n,m,i;
    int count=0,max=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        count+=a[i];
        if(max<a[i]) max=a[i];
    }
    int l=max, r=count, mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(check(mid,n,m)) l=mid+1;
        else r=mid-1;
    }
    cout<<mid<<endl;
    return 0;
}
