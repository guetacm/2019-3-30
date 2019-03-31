#include <bits/stdc++.h>

using namespace std;

int a[1000001];

int main()

{

    int n;

    cin>>n;

    for(int i=1;i<=n;i++)

        cin>>a[i];

    sort(a+1,a+1+n);

    cout<<a[1];

    for(int i=2;i<=n;i++)

        if(a[i]!=a[i-1])

            cout<<" "<<a[i];

    cout<<endl;

    return 0;

}