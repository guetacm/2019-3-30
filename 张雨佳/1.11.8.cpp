#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    vector<int> a1;
    while(n--)
    {
        cin>>a;
        a1.push_back(a);
    }
    sort(a1.begin(),a1.end());
    cout<<a1[0]<<" ";
    for(int i=1;i<a1.size();i++)
        if(a1[i]!=a1[i-1])
        cout<<a1[i]<<" ";
    return 0;
}
