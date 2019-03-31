#include <iostream>
#include<algorithm>
using namespace std;
int cmp(int x, int y)
{
    return x>y;
}
int main()
{
    int aa=0,bb=0;
    long long  a[12],b[12];
    for(int i=0;i<10;i++)
    {
        int x;
        cin>>x;
        if(x&1)
            a[aa++]=x;
        else
            b[bb++]=x;
    }
    sort(a,a+aa,cmp);
    sort(b,b+aa);
    for(int i=0;i<aa;i++)
        cout<<a[i]<<' ';
    for(int i=0;i<bb;i++)
        cout<<b[i]<<' ';
    return 0;
}
