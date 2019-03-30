//病人排队
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct bingren{
    int num;
    string id;
    int age;
};

bingren a[105];

int cmp(bingren c,bingren d){//作比较一定要仔细，不然就会wa
    if(c.age>=60&&d.age>=60){
        if(c.age>d.age) return 1;
        if(c.age<d.age) return 0;
        if(c.age==d.age){
            if(c.num<d.num) return 1;
            if(c.num>d.num) return 0;
        }
    }
    if(c.age>=60&&d.age<60) return 1;
    if(c.age<60&&d.age>=60) return 0;
    if(c.age<60&&d.age<60){
        if(c.num>d.num) return 0;
        if(d.num>c.num) return 1;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].id;
        cin>>a[i].age;
        a[i].num=i;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].id<<endl;
    }
    return 0;
}
