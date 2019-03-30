#include <bits/stdc++.h>

using namespace std;



bool cmp(float x,float y)
{
    return x>y;
}

int main()
{
    int n,f1=0,m1=0;
    float f[45],m[45];
    char a[10];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        scanf("%s",a);
        if(a[0]=='f') scanf("%f",&f[f1++]);
        else scanf("%f",&m[m1++]);
        getchar();
    }
    sort(m,m+m1);
    sort(f,f+f1,cmp);
    for(int i=0;i<m1;i++)
    {
        printf("%.2f ",m[i]);
    }
    for(int i=0;i<f1;i++)
    {
        printf("%.2f ",f[i]);
    }
    return 0;
}