#include <iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()

{

    int n;
    cin>>n;
    vector<int> a;
    int b;
    while(n--)
    {

        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());


    int m;
    cin>>m;
    for(int i=0;i<a.size()-1;i++)
    {

        int y=m-a[i];
       int l=i+1,r=a.size()-1;
       if(a[r]==y)
        {
               cout<<a[i]<<' '<<y<<endl;
               return 0;

           }
       while(l<r)
       {

           int mid=(l+r)/2;

           if(y==a[mid])
           {
               cout<<a[i]<<' '<<y<<endl;
               return 0;

           }
           if(y>a[mid])
            l=mid+1;
           else
            r=mid;
       }
    }
    cout<<"No"<<endl;
    return 0;
}
