#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn=100+1;
int main()
{
    vector<int> a;
    int  b;
    int n;
   cin>>n;
while(n--)
      {cin>>b;


        a.push_back(b);
        }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    cout<<a.size()<<endl;
    while(a.size())
    {

        cout<<*a.begin()<<' ';
        a.erase(a.begin());
    }



    return 0;
}
