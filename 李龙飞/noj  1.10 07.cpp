#include <iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
bool cmp(int a, int b )
{
    if( a > b )
       return 1;
    else
       return 0;
}


int main()
{
 vector<double> male;
 vector<double> famale;
   int n;
   cin>>n;
   string a;
   double b;

   while(n--)
    {

        cin>>a>>b;
        if(a=="male")
            male.push_back(b);
        else
            famale.push_back(b);

    }
    sort(male.begin(),male.end());
    sort(famale.begin(),famale.end());
    while(male.size())
    {
       printf("%.2lf ",male.front());
        male.erase(male.begin());

    }
    while(famale.size())
    {

        printf("%.2lf ",famale.back());
        famale.erase(famale.end()-1);
    }

    return 0;
}
