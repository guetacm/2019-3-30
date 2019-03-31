#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int a[100000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
     for(int i=0;i<n;i++)
        cout<<a[i];
    int sum;
    cin>>sum;
    int p,flag;
    p=0;flag=0;
    int l,r,s,mid;
    while(p<n&&flag==0)
    {
        l=p;r=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[p]+a[mid]==sum)
            {
                flag=1;
                cout<<a[p]<<' '<<a[mid]<<endl;
                break;
            }
            else if(a[p]+a[mid]>sum)
            {
                r=mid-1;
            }
            else if(a[p]+a[mid]<sum)
                l=mid+1;
        }
    }
    if(flag==0) cout<<"NO"<<endl;
    return 0;
}