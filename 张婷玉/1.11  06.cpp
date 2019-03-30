#include <bits/stdc++.h>
using namespace std;
int a[100005];int n,m;
bool check(int low,int high){
    int mid=(low+high)/2;
    int ans=0;
    int t=1;
    for(int i=0;i<n;i++)
    {
        if(ans+a[i]>mid)
        {
            t++;
            ans=0;
        }
        if(ans+a[i]<=mid)
        {
            ans+=a[i];
        }
    }
    if(t>m) return true;
    else return false;}
int main(){
    int i;
    int maxx=0;
    long long sum=0,low,high;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]>maxx) maxx=a[i];
    }
    low=maxx;
    high=sum;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(check(low,high)) low=mid+1;
        else high=mid-1;
    }
    printf("%d",low);
    return 0;}