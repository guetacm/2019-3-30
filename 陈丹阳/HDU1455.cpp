#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[100];
int book[100];
int aim1,aim2,n;
int cmp(int x, int y)
{
    return x>y;
}
int dfs(int step, int len, int pos)
{
    if(step==aim2)
        return true;
    if(len==aim1)
        return dfs(step+1,0,0);
    for(int i=pos;i<n;i++)
    {
        if(book[i]==0&&a[i]+len<=aim1)
        {
            book[i]=true;
            if(dfs(step,len+a[i],i+1))
                return true;
            book[i]=false;
            if(len==0)
                return false;
        }
    }
    return false;
}
int main()
{
    while(cin>>n)
    {
        if(n==0)
            break;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n,cmp);
        for(int i=a[0];i<=sum;i++)
        {
            if(sum%i==0)
            {
                memset(book,0,sizeof(book));
                aim1=i;
                aim2=sum/aim1;
                if(dfs(0,0,0))
                    break;
            }
        }
        cout<<aim1<<endl;
    }
    return 0;
}
