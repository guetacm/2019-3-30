#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a[10], i, j, k, n;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
		if (a[i] == a[i+1])
			i++;
	}
	return 0;
}