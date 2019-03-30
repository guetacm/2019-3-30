#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}
int main() {
	int N, i, Temp,Num[105];
	cin >> N;
	for (i = 0; i < N; i++)
		cin >> Num[i];
	sort(Num, Num + N);
	for (i = 0,Temp=N; i < N - 1; i++)
		if (Num[i] == Num[i + 1])
		{
			Temp--;
			Num[i] = 1005;
		}
	sort(Num, Num + N);
	cout << Temp << '\n' << Num[0];
	for (i = 1; i < Temp; i++)
		cout << ' ' << Num[i];
	return 0;
}