#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
	return a > b;
}
int main()
{
	int a[11] = { 0 };
	int b[11] = { 0 };
	int n, j = 0, k = 0, count1 = 0, count2 = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		if (n % 2 == 0) {
			b[j++] = n; count1++;
		}
		else {
			a[k++] = n; count2++;
		}
	}
	sort(b, b + count1);
	sort(a, a + count2, compare);
	for (int i = 0; i < count2; i++) 
	{
		cout << a[i]<<' ';
	}
	for (int i = 0; i < count1; i++)
	{
		cout << b[i] << ' ';
	}
	return 0;
}