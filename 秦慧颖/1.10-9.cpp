#include <iostream>
#include <algorithm>
using namespace std;
//#define N 10
int main()
{
    int N;
    cin>>N;
    int a[N],c=0;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    sort(a,a+N);
    int b=unique(a,a+N)-a;
    cout<<b<<endl;
    for(int j=0;j<b;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    return 0;
}
