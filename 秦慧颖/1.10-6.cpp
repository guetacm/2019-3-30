#include <iostream>
#include <algorithm>
using namespace std;
#define N 10
int main()
{
    int a[N],c=0,k=0;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            c++;
    }
    int b[c];
    sort(a,a+N);
    for(int j=9;j>=0;j--)
    {

        if(a[j]%2==1) cout<<a[j]<<" ";
        else
        {
            b[k]=a[j];
            k++;
        }
    }
    for(int o=c-1;o>=0;o--)
    {
        cout<<b[o]<<" ";
    }
    cout<<endl;
    return 0;
}
