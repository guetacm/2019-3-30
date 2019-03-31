#include <iostream>
using namespace std;
int main()
{
    int ll,l,r,n,m;
    int i,j,mid;
    int rr[500007];
    int ans;
    cin>>ll>>n>>m;
    for(i=1;i<=n;i++)
        cin>>rr[i];
    rr[0]=0;
    rr[n+1]=ll;
    l=0;
    r=ll+1;
    while(l+1<r)
    {
        mid=(l+r)/2;
        ans=0;
        i=0;
        while(i<=n)
        {
            j=i+1;
            while(rr[j]-rr[i]<mid&&j<=n+1)
                j++;
            ans+=j-i-1;
            i=j;
        }
        if(ans<=m) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    return 0;
}
