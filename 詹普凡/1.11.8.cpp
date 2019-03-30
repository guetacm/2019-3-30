//不重复的输出数
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>ans;
    int n;
    cin>>n;
    int t;
    int i;
    for(i=0;i<n;i++){
        cin>>t;
        ans.insert(t);
    }
    int a[100005];
    i=0;
    for(set<int>::iterator it=ans.begin();it!=ans.end();it++){
        t=*it;
        a[i]=t;
        i++;
    }
    for(int j=0;j<i-1;j++){
        cout<<a[j]<<" ";
    }
    cout<<a[i-1]<<endl;
    return 0;
}
//set妙用