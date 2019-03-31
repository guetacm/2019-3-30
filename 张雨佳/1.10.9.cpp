#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,a;
    cin>>N;
    vector<int> vec;
    vector<int> v1;
    while(N--)
    {
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    v1.push_back(vec[0]);
    for(int i=1;i<vec.size();i++)
    {
        if(vec[i]!=vec[i-1])
            v1.push_back(vec[i]);
    }
    cout<<v1.size()<<"\n";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    return 0;
}
