#include<iostream>
#include<cstdio>
#include<algorithm>
const int MAX=100010;
using namespace std;
int spent[MAX];
int money[MAX];
int N,M;
bool panduan(int a){
	int m=1;
	int s=0;
	for(int i=0;i<N;i++){
		if(m>M) return false;
		if(s+spent[i]>a){
			s=spent[i];
			m++;
		}
		else
			s+=spent[i];
	}
	return true;
}
int main(){
	cin>>N>>M;
	int R=0;
	for(int i=0;i<N;i++){
		cin>>spent[i];
		money[i]=spent[i];
		R+=spent[i];
	}
	sort(money,money+N);
	int L=money[N-1];
	int value;
    while(L<=R){
    	int mid=L+(R-L)/2;
    	if(panduan(mid)){
    	   value=mid;
    	   R=mid-1;
		}
		else
	       L=mid+1;
	}
	cout<<value<<endl;
	return 0;
}


