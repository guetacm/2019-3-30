#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
struct Message {
	int ID;
	int age;
};
bool cmp(Message a,Message b)
{
	return a.age > b.age;
}
int main() {
	int n, i, j = 0, k = 0, id, age;
	Message Mes1[10], Mes2[10];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> id >> age;
		if (age >= 60)
		{
			Mes1[j].ID = id;
			Mes1[j].age = age;
			j++;
		}
		else
		{
			Mes2[k].ID = id;
			Mes2[k].age = age;
			k++;
		}
	}
	sort(Mes1, Mes1 + j, cmp);
	for (i = 0; i < j; i++)
		cout << Mes1[i].ID<<endl;
	for (i = 0; i < k; i++)
		cout << Mes2[i].ID<<endl;
	return 0;
}