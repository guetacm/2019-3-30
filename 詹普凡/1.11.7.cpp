//��Ϊ������
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
        int p=lower_bound(a+i+1,a+n,t)-a;//�׸���ȻҪ��
        if(a[p]==t){
            cout<<a[i]<<" "<<a[p]<<endl;
            check=1;
            break;
        }
    }
    if(check==0) cout<<"No"<<endl;
    return 0;
}
//wa�˺ö�Σ�ԭ���ǵ�i==pʱ��Ҫ���No�ġ�����ϸ��