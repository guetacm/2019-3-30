#include<iostream>
#include<cstdio>
using namespace std;
int n, m, L, l, r, mid;
int a[50006];
int f(int mid)
{
	int cnt = 0, wz = 0, i;
	for (i = 1; i <= n; i++)
	{
		if (a[i] - a[wz] <= mid)	// �ҵ�ʯ�Ӽ����̾�������ֵmid
		{
			cnt++;
		}
		else wz = i;
	}
	return cnt;
}
int main()
{
	int i, x;
	scanf("%d%d%d", &L, &n, &m);

	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	n++;
	a[n] = L;
	l = 0; r = L;
	while (l <= r)
	{
		mid = (l + r) / 2;	//���ֲ����ʺϵľ���
		x = f(mid);		//����midӦȥ����ʯ����
		cout << "l=" << l << ' ' << "r=" << r << " x=" << x << endl;
		if (x>m) r = mid - 1;
		else l = mid + 1;
	}
	printf("%d", l);
	return 0;
}