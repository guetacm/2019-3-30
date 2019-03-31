#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int i=0;
    string s[1000];
    string ss;
    getline(cin,ss);
    int len=ss.length();
    int j=0;
    for (i=0;i<len;i++)
    {
        if(ss[i]==' ')
        {
            if(ss[i-1]!=' ')
                j++;
            continue;
        }
        s[j]+=ss[i];
    }
    sort(s,s+j+1);
    string pre;
    for(int i=0;i<=j;i++)
    {
        if(s[i]!=pre)
            cout<<s[i]<<endl;
        pre=s[i];
    }
    return 0;
}
