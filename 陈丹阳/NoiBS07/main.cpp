#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    long long a[100007];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    unsigned long long m;
    cin>>m;
    if(m>2*1e8)
    {
        cout<<"No"<<endl;
        return 0;
    }
    sort(a,a+n);
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==m)
        {
        cout<<a[i]<<' '<<a[j]<<endl;
        return 0;
        }
        if(a[i]+a[j]>m)
        {
            j--;
        }
        else if(a[i]+a[j]<m)
        {
            i++;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
