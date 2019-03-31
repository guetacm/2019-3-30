//合影效果
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

bool cmp(double a,double b){
    return a>b;
}

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
    sort(f,f+c,cmp);
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    for(int i=0;i<d;i++){
        cout<<m[i]<<" ";
    }
    for(int i=0;i<c-1;i++){
        cout<<f[i]<<" ";
    }
    cout<<f[c-1]<<endl;
    return 0;
}
