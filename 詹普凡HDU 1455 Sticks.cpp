//HDU 1455 Sticks
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int data[70];
int vis[70];//0代表没去过，1表示去过；写题时弄错了，找了好久bug
int counts,length,n;//目标木棍条数，目标木棍长度，碎片数目

bool cmp(int a,int b){
    return a>b;
}

bool dfs(int now_counts,int now_length,int now_locate){//当前木棍条数，当前长度总和，当前下标位置
    if(now_counts==counts) return true;//如果当前拼接的木棍条数等于要求的木棍条数，则成功
    if(now_length==length) return dfs(now_counts+1,0,0);//找到了一组碎片拼接成功，那就找下一组
    for(int i=now_locate;i<n;i++){
        if(vis[i]==0&&(now_length+data[i]<=length)){//没去过且拼接后长度符合要求
            vis[i]=1;
            if(dfs(now_counts,now_length+data[i],i+1)) return true;//符合要求就把碎片拼接上
            vis[i]=0;
            if(now_length==0) return false;//如果第一次做拼接这个长度的碎片就没有通过上面的if，那直接退出
            while(data[i]==data[i+1]&&i+1<n) i++;//如果拼接到一半发现这个长度过不了if，那么之后的相同长度就跳过
        }
    }
    return false;
}

int main(){
    while(cin>>n){
        if(n==0) break;
        long long sum=0;//所有木棍的总长度，防爆用ll
        for(int i=0;i<n;i++){
            cin>>data[i];
            sum+=data[i];
        }
        sort(data,data+n,cmp);//从大到小排列数据
        int ans=0;
        for(int i=1;i<=sum;i++){
            if(sum%i==0){//总和可以被分配给i这么长的棍子
                memset(vis,0,sizeof(vis));//放if里面减少内存
                length=i;
                counts=sum/length;
                if(dfs(0,0,0)){//看看碎片在这个条数下面可不可以被拼成这个长度
                    ans=length;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*看了一遍网上的代码，然后再写的。0ms，牛逼。这个剪枝其实包含了三种方法，很厉害。
第一种是当你选的length第一次做dfs时，没有碎片可以拼接成这个长度，那就减掉；
第二种是在你的dfs取到了几个完整的木棍之后，发现剩下的碎片没法组成这个长度了，减掉；
这两种剪枝被包裹在一句if(now_length==0) return false;里面，很厉害
第三种是当你尝试一种长度时，发现接不上，那么剩下的相同长度的碎片都不再接了，减掉。*/
