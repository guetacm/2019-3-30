#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
using namespace std;
struct person
{
    char c[20];
    double age;
};
bool com(person &p1,person&p2)
{
    if(p1.age>=60&&p2.age>=60)
    {
        if(p1.age>p2.age)
            return 1;
        else if(p1.age==p2.age)
            return 1;
        else return 0;
    }
    else if(p1.age<60&&p2.age>=60)
        return 0;
    else if(p1.age>=60&&p2.age<60)
        return 1;
    else if(p1.age<60&&p2.age<60)
    {
        if(p1.age>p2.age)
            return 0;
        else if(p1.age==p2.age)
            return 1;
        else return 0;
    }
}
int main()
{
    person p[40];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].c;
        cin>>p[i].age;
    }
    sort(p,p+n,com);
    for(int i=0;i<n;i++)
    {
    cout<<p[i].c<<endl;
    }
    return 0;
}