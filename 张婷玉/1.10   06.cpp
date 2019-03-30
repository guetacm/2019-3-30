#include <bits/stdc++.h>

using namespace std;

bool cmp(int x,int y)
{
    return x>y;
}

int main()
{
    int b[15],c[15],t;
    int ans1=0,ans2=0;
    for(int i=0;i<10;i++)
    {
        //scanf("%d",&t);
        cin >> t;
        if(t%2)  b[ans1++]=t;
        else c[ans2++]=t;
    }
    sort(b,b+ans1,cmp);
    sort(c,c+ans2);
    for(int i=0;i<ans1;i++)
    {
        //if(i) printf("% d",b[i]);
        //else printf("%d",b[i]);
        //if(i) cout << " " << b[i];
        cout << b[i]<< " ";
    }
    for(int i=0;i<ans2;i++)
    {
        //printf("% d",c[i]);
        cout << c[i]<< " ";
    }
    return 0;
}