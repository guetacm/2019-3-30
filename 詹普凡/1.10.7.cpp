//合影效果
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    double f[105];
    double m[105];
    int c=0;
    int d=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a=="female"){
            cin>>f[c];
            c++;
        }
        if(a=="male"){
            cin>>m[d];
            d++;
        }
    }
    sort(m,m+d);
    sort(f,f+c);
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    for(int i=0;i<d;i++){
        cout<<m[i]<<" ";
    }
    for(int i=c-1;i>=1;i--){
        cout<<f[i]<<" ";
    }
    cout<<f[0]<<endl;
    return 0;
}
//写这个题目的时候不知道为什么cmp一直没有用，所以没写cmp。