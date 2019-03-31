#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
struct stu
{
    string num;
    double sc;
};
bool cmp(stu x, stu y)
{
    return x.sc<y.sc;
}
int main()
{
    stu a[10000];
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i].num>>a[i].sc;
    sort(a,a+n,cmp);
    cout<<a[k-1].num<<' '<<a[k-1].sc<<endl;
    return 0;
}
