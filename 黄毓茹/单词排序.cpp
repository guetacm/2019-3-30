#include <bits/stdc++.h>


using namespace std;

int main()
{
    string juzi[101];
    bool flag;
    int i,k=0;
    while(cin>>juzi[k])
    {
        flag=false;
        for( i=0;i<k;i++)
        {
            if(juzi[k].compare(juzi[i])==0)
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            k++;
        }
    }
    sort(juzi,juzi+k);
    for(int i=0;i<k;i++)
    {
        cout<<juzi[i]<<endl;
     }

    return 0;
}
