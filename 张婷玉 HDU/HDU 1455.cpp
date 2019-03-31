#include <bits/stdc++.h>

using namespace std;

int arr[70];
//int brr[70];
bool vis[70];
int n,i,tt;

bool cmp(int x,int y)
{
    return x>y;
}
bool dfs(int ans,int sum)
{
    //if(ans==n+1&&sum==0) return true;
    //if(ans==n+1&&sum!=0) return false;
    if(tt==ans) return true;
    for(int j=0;j<n;j++)
    {
        if(!vis[j])
        {
            if(sum+arr[j]==i)
            {
                vis[j]=true;
                if(dfs(ans+1,0)) return true;
                vis[j]=false;
                return false;
            }
            if(sum+arr[j]<i)
            {
                vis[j]=true;
                if(dfs(ans,sum+arr[j])) return true;
                vis[j]=false;
                if(!sum) return false;
                while(arr[j]==arr[j+1]) j++;
            }
        }
    }
    return false;
}

int main()
{
    while(scanf("%d",&n)!=EOF&&n)
    {
        int num=0;
        //memset(vis,false,sizeof(vis));
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            num+=arr[i];
        }
        sort(arr,arr+n,cmp);
        for(i=arr[0];i<=num;i++)
        {
           if(num%i==0)
           {
               tt=num/i;
               memset(vis,false,sizeof(vis));
               //memset(brr,0,sizeof(brr));
               if(dfs(1,0))
               {
                printf("%d\n",i);
                break;
                }
                //if(mark==1) break;
           }
        }
    }
    return 0;
}
