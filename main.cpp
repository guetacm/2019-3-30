#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
//emmmm还是不太会
int m;
int a[100];
bool dir[100];
bool compare(int a, int b)
{
    return a > b;
}
//剪枝？？？
bool dfs(int len,int aq,int per,int th)
{
    if(th==0) return 1;
    int i;
    for(i=aq;i<m;i++)
    {
        if(dir[i]) continue;
        if(len+a[i]>per) continue;
        else if (len+a[i]==per)
        {
            dir[i]=1;
            if(dfs(0,0,per,th-per))
                return 1;
            dir[i]=0;
            return 0;
        }
        else if (len+a[i]<per)
        {
            dir[i]=1;
            if(dfs(len+a[i],aq+1,per,th))
                return 1;
            dir[i]=0;
            if(len==0) return 0;
            while (a[i]==a[i+1]) i++;
        }
    }
    return 0;
}

int main()
{
    int i;
    while(cin>>m,m!=0)
    {
        int sum=0;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+m,compare);
        int fir=a[0];
        for(i=fir;i<=sum;i++)
        {
            if(sum%i!=0) continue;
            memset(dir,0,sizeof(dir));
            if(dfs(0,0,i,sum))
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

