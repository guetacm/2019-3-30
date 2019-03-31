#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct hos
{
    string num;
    int ag;
};
hos a[1000],b[1000];
bool cmp(hos x, hos y)
{
    return x.ag>y.ag;
}
int main()
{
    int n;
    cin>>n;
    int aa=0,bb=0;
    for(int i=0;i<n;i++)
    {
        string nn;
        int age;
        cin>>nn>>age;
        if(age>=60)
        {
            a[aa].num=nn;
            a[aa].ag=age;
            aa++;
        }
        else
        {
            b[bb].num=nn;
            b[bb].ag=age;
            bb++;
        }
    }
    stable_sort(a,a+aa,cmp);
    for(int i=0;i<aa;i++)
        cout<<a[i].num<<endl;
    for(int i=0;i<bb;i++)
        cout<<b[i].num<<endl;
    return 0;
}
