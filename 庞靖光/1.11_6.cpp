#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int n, m, a[100009], Max = 0, Temp, _Temp;
bool Jiancha(int);
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		Temp += a[i];
		if (a[i]>Max)Max = a[i];
	}
	int Left = Max, Right = Temp, Middle;
	while (Left <= Right)
	{
		Middle = (Left + Right) >> 1;
		if (Jiancha(Middle))
		{
			_Temp = Middle;
			Right = Middle - 1;
		}
		else
			Left = Middle + 1;

	}
	printf("%d", _Temp);
}
bool Jiancha(int x)
{
	int sum = 0, Sever = 1;
	for (int i = 1; i <= n; i++)
	{
		if (sum + a[i]>x)
		{
			sum = a[i];
			Sever++;
		}
		else
			sum += a[i];
	}
	if (Sever <= m)return 1;
	else
		return 0;
}