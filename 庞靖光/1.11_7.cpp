#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int n, m;
int a[100009];
int   f(int);
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	sort(a + 1, a + n + 1);
	for (int i = 1; a[i] <= m / 2; i++)
	{
		if (f(m - a[i]) && f(m - a[i]) != i)
		{
			printf("%d %d", a[i], m - a[i]);
			return 0;
		}
	}
	printf("No");
	return 0;
}
int f(int  x)
{
	int  l = 1, r = n, mid;
	while (l <= r)
	{
		mid = l + ((r - l) >> 1);
		if (a[mid] == x)return mid;
		if (a[mid]<x)l = mid + 1;
		if (a[mid]>x)r = mid - 1;
	}
	return 0;
}