#include <bits/stdc++.h>

using namespace std;

struct node
{
    char a[15];
    int age;
};
node arr[105],b[105];

bool cmp(node x,node y)
{
    return x.age>y.age;
}

int main()
{
    int n,tt,ans1=0,ans2=0;
    char ss[15];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        scanf("%s",ss);
        scanf("%d",&tt);
        if(tt>=60)
        {
            strcpy(arr[ans1].a,ss);
            arr[ans1++].age=tt;
        }
        else
        {
            strcpy(b[ans2].a,ss);
            b[ans2++].age=tt;
        }
        memset(ss,0,sizeof(ss));
        getchar();
    }
    sort(arr,arr+ans1,cmp);
    for(int i=0;i<ans1;i++)
    {
        printf("%s\n",arr[i].a);
    }
    for(int i=0;i<ans2;i++)
    {
        printf("%s\n",b[i].a);
    }
    return 0;
}