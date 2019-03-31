#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> j1;
    vector<int> o1;
    int n=10;
    int a;
    while(n--)
    {
        cin>>a;
        if(a%2!=0)
            j1.push_back(a);
        else
            o1.push_back(a);

    }
    sort(j1.begin(),j1.end(),greater<int>());
        sort(o1.begin(),o1.end());
        for(int i=0;i<j1.size();i++)
            cout<<j1[i]<<" ";
        for(int i=0;i<o1.size();i++)
            cout<<o1[i]<<" ";
    return 0;
}
