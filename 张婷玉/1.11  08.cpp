#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    set<int>S;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        S.insert(s);
    }
    for(set<int>::iterator it=S.begin();it!=S.end();it++)
    {
        cout << *it << " ";
    }
    return 0;}