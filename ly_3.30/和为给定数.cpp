#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n[10] = {0}, m, i, j, l, r, flag = 1, mid;
	cin >> i;
	for (j = 0; j < i; j++)
	{
		cin >> n[j];
	}
	cin >> m;
	sort(n, n + j);
	for (j = 0; j < i; j++)
	{
		l = j; r = i-1; 
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (n[j] + n[mid] < m)l = mid+1;
			else if (n[j] + n[mid] > m)r = mid-1;
			else
			{
				cout << n[j] << ' ' << n[mid];
				flag = 0; break;
			}
		}
		if (!flag)break;
	}
	if (flag)cout << 'NO';
		return 0;
}