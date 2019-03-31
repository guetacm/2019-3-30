#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int pre=-1;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==pre)
            count++;
        pre=a[i];
    }
    cout<<n-count<<endl;
    pre=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=pre)
        {
            cout<<a[i]<<' ';
            pre=a[i];
        }
    }
    return 0;
}
