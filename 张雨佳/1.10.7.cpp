#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    string a;float b;
    cin>>n;
    vector<float> m1;
    vector<float> f1;
    string ff="female";
    string mm="male";
    while(n--)
    {
        cin>>a>>b;
        if(a==mm)
            m1.push_back(b);
       if(a==ff)
            f1.push_back(b);
    }
    sort(m1.begin(),m1.end());
        sort(f1.begin(),f1.end(),greater<float>());
            for(int i=0;i<m1.size();i++)
                printf("%.2f ",m1[i]);
            for(int i=0;i<f1.size();i++)
                printf("%.2f ",f1[i]);
    return 0;
}

