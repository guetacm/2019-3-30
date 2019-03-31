#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int n, a[100];
int group, ans, sum, vis[100];

bool cmp(int a, int b){
    return a>b;
}

bool DFS(int cnt, int pre, int p)
{
    if(cnt==group)
        return true;

    for(int i=p; i<n; i++)
    {
        if(vis[i])
            continue;

        if(pre+a[i]==ans)
        {
            vis[i]=1;
            if(DFS(cnt+1, 0, 0))
                return true;
            vis[i]=0;
            break;
        }

        if(pre+a[i]<ans)
        {
            vis[i]=1;
            if(DFS(cnt, pre+a[i], i+1))
                return true;
       
            vis[i]=0;
            if(!pre)  break;
            //vis[i]=0;
            //这个vis的还原之前和if的break顺序弄错了，一直wa，查TM半个小时
            while(a[i]==a[i+1])
               i++;
        }
    }
    return false;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    while(cin>>n, n)
    {
        sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];sum+=a[i];
        }

        sort(a, a+n, cmp);
        for(ans=a[0]; ans<=sum; ans++)
        {
            if(sum%ans)
                continue;

            group=sum/ans;
            memset(vis, 0, sizeof(vis));
            if(DFS(0, 0, 0)){
                cout<<ans<<endl;
                break;
            }
        }
    }
    return 0;
}

