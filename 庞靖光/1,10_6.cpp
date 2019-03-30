#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}
int main() {
	int a[11], b[11], i, j, k;
	for (k = 0, i = 0, j = 0; k < 10; k++)
	{
		cin >> a[i];
		if (a[i] % 2 == 1)
		{
			b[j] = a[i];
			a[i] = '\0';
			j++;
		}
		else i++;
	}
	sort(a, a + i);
	sort(b, b + j,cmp);
	if (j)
	{
		cout << b[0];
		for (k = 1; k < j; k++)
			cout << ' ' << b[k];
		k = 0;
	}
	else
	{
		cout << a[0];
		k = 1;
	}
	for (;k < i; k++)
		cout << ' ' << a[k];
	return 0;
}