
#include <iostream>

#include <string.h>

#include <algorithm>

using namespace std;

int n,maxx,sum,arr[70];

bool ispos,vis[70];



bool cmp(int a,int b)

{

    return a>b;

}

 

 

void dfs(int res,int js,int pos)

{

    if(ispos==1)    return;

    

    if(js==n)   {ispos=1;return;}



    if(res==0 && js<n)  dfs(maxx,js,0);

 

    int i;

    for(i=pos;i<n;++i)

    {

        if(!ispos && !vis[i] && arr[i]<=res)

        {

            vis[i]=1;

            dfs(res-arr[i],js+1,pos);

            vis[i]=0;

 
 

            if(res==arr[i]) return;

            

            if(res==maxx)   return;

            

            while(arr[i]==arr[i+1]) ++i;

        }

    }

 

}

 

int main()

{

    int i;

    while(cin>>n)

    {

        if(!n)  break;

        sum=0;

        for(i=0;i<n;++i)

        {

            cin>>arr[i];

            sum+=arr[i];

        }

        sort(arr,arr+n,cmp);

        maxx=arr[0];

 

       
        if(maxx>sum-maxx)

        {

           cout<<sum<<endl;

            continue;

        }

        ispos=0;

        while(!ispos)

        {

           
            while(sum%maxx!=0) {++maxx;}

 

            memset(vis,0,sizeof(vis));

            dfs(maxx,0,0);

            if(ispos)   break;

            ++maxx;

        }

        cout<<maxx<<endl;

    }

    return 0;

}
希望我以后可以熟练运用这种方法学习，我会努力的。。。
