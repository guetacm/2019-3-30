#include <bits/stdc++.h>
using namespace std;
int a[100005];int ans;long long ss;
bool searchh(int low,int high){
    int mid;
    while(low<=high)
        {
            mid=(low+high)/2;
            if(a[mid]<ss)
            {
                low=mid+1;
            }
            if(a[mid]>ss)
            {
                high=mid-1;
            }
            if(a[mid]==ss)
            {
                ans=mid;
                return true;
            }
        }
        return false;}
int main(){
    int n,i,low,high,t=0;
    long long sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%lld",&sum);
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        ss=sum-a[i];
        low=i+1;
        high=n-1;
        if(searchh(low,high))
        {
            printf("%d %d",a[i],ss);
            t=1;
            break;
        }
    }
    if(t==0) printf("No");
    return 0;}