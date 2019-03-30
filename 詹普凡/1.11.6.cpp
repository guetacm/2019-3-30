//月度开销
#include<iostream>
using namespace std;

int n,m,a[1000001];

int check(int t){
    int q=0,p=0;
    for(int i=1;i<=n;i++){
        q+=a[i];
        if(q>=t){
            p++;
            if(a[i]<t) q=a[i];
            else return 1;
        }
    }
    return p>=m;
}

int main(){
    int sum=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int left,right,mid;
    left=1;
    right=sum;
    while(left+1<right){
        mid=(left+right)/2;
        if(check(mid)) left=mid;
        else right=mid;
    }
    if(check(left)) cout<<left<<endl;
    else cout<<right<<endl;
    return 0;
}
//看了别人的代码才会...没救了