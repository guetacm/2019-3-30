#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
    string a;
    int N;
    cin>>N;
    float e[N],d[N];
    int c=0,b=0;
    while(N--)
    {
        cin>>a;
        if(a=="male")
        {
            cin>>e[c];
            c++;
        }
        else if(a=="female")
        {
            cin>>d[b];
            b++;
        }
    }
    float fe[b],ma[c];
    for(int i=0;i<b;i++)
    {
        fe[i]=d[i];
    }
    for(int j=0;j<c;j++)
    {
        ma[j]=e[j];
    }
    sort (fe,fe+b);
    sort (ma,ma+c);
    for(int k=0;k<c;k++)
        printf("%.2f ",ma[k]);
    for(int o=b-1;o>=0;o--)
        printf("%.2f ",fe[o]);
    cout<<endl;
    return 0;
}
