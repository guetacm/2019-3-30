//和为给定数
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long a[100005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long m;
    int check=0;
    cin>>m;
    for(int i=0;i<n;i++){
        long long t=m-a[i];
        int p=lower_bound(a+i+1,a+n,t)-a;//白给当然要用
        if(a[p]==t){
            cout<<a[i]<<" "<<a[p]<<endl;
            check=1;
            break;
        }
    }
    if(check==0) cout<<"No"<<endl;
    return 0;
}
//wa了好多次，原来是当i==p时，要输出No的。不够细啊