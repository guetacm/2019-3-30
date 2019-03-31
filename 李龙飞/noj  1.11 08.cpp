#include <iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()

{

   vector<int> a;
   int n;
   cin>>n;
   int b;
   while(n--)
   {
        cin>>b;
        a.push_back(b);


   }
   sort(a.begin(),a.end());
   a.erase(unique(a.begin(),a.end()),a.end());
   while(a.size())
   {

       cout<<a.front()<<' ';
       a.erase(a.begin());
   }
   return
   0;

}
