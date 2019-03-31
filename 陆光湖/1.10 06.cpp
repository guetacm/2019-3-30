#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
using namespace std;
bool com(int &p1,int &p2)
{
    if(p1%2==0&&p2%2==0)
    {
        if(p1>p2)
            return 0;
        else return 1;
    }
    else if(p1%2==0&&p2%2==1)
        return 0;
    else if(p1%2==1&&p2%2==0)
        return 1;
        else
        if(p1>p2)
                return 1;

}
int main()
{
    int p[40];
    for(int i=0;i<10;i++)
    {
        cin>>p[i];
    }
    sort(p,p+10,com);
    for(int i=0;i<10;i++)
    {
   cout<<p[i]<<' ';
    }
    cout<<endl;
    return 0;
}