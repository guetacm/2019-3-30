//整数奇偶排序
#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int a[11];

int comp1(const int &a,const int &b){
    if(a%2==1) return 1;
    else return 0;
}//奇数放在前面

int comp2(const int &a,const int &b){
    if(a%2==1){
        if(a>b) return 1;
        else return 0;
    }
    else{
        if(a<b&&a%2==0&&b%2==0) return 1;
        else return 0;
    }
}//作比较

int main(){
    for(int i=0; i<10; i++)
        cin>>a[i];
    sort(a,a+10,comp1);
    sort(a,a+10,comp2);
    for(int i=0; i<=8; i++)
        cout<<a[i]<<" ";
    cout<<a[9]<<endl;
    return 0;
}//这题借鉴了网上代码，好久没写sort了，所以搜了一题
