#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
using namespace std;
struct person
{
    char c[20];
    double high;
};
bool com(person &p1,person&p2)
{
    if(p1.c[0]=='m'&&p2.c[0]=='m')
    {
        return p1.high<p2.high;
    }
    else if(p1.c[0]=='f'&&p2.c[0]=='f')
        return p1.high>p2.high;
    else if(p1.c[0]=='m'&&p2.c[0]=='f')
        return 1;
    else if(p1.c[0]=='f'&&p2.c[0]=='m')
        return 0;
}
int main()
{
    person p[40];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].c;
        cin>>p[i].high;
    }
    sort(p,p+n,com);
    for(int i=0;i<n;i++)
    {
    printf("%.2f ",p[i].high);
    }
    cout<<endl;
    return 0;
}