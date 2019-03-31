#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
bool compare(float a, float b) {
	return a > b;
}
struct Student {
	char sex[6];
	float height;
};
int main() {
	int n, i, j = 0, k = 0;
	float a[10] = { 0 }, b[10] = { 0 };
	Student stu[10];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> stu[i].sex;
		cin >> stu[i].height;
		if (!strcmp(stu[i].sex, "male"))
		{
			a[j++] = stu[i].height;
		}
		else
		{
			b[k++] = stu[i].height;
		}
	}
	sort(a, a+j);
	sort(b, b+k, compare);
	for (i = 0; i < j;)
	{
		cout << a[i++]<<' ';
	}
	for (i = 0; i < k;)
	{
		cout << b[i++]<<' ';
	}
	return 0;
}