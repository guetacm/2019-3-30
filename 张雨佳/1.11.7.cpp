#include<bits/stdc++.h>
using namespace std;
long a1[100010];


int main()
{
    int n;int i,j;int m;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a1[i];
    cin>>m;
    sort(a1,a1+n);
    i=0;j=n-1;
    while(i<j)
    {
        if(a1[i]+a1[j]==m)
        {
            cout<<a1[i]<<" "<<a1[j];
            return 0;
        }
        else if(a1[i]+a1[j]>m)
            j--;
        else
            i++;
    }
    cout<<"NO";
}


