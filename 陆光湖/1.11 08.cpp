#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[100000]={0};
    int temp,m=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>m) m=temp;
        a[temp]=1;
    }
    for(int i=0;i<=m;i++)
    {
        if(a[i]==1)
            cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}