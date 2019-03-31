#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn=100+1;
int main()
{
    vector<string> a;
    string b;
    while(cin>>b)

        a.push_back(b);
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());

    while(a.size())
    {

        cout<<*a.begin()<<endl;
        a.erase(a.begin());
    }



    return 0;
}
