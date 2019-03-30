#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	string Words[105];
	int num = 0;
	while (cin >> Words[num]) {
		bool IsWord = false;
		for (int i = 0; i < num; i++) {
			if (Words[i].compare(Words[num]) == 0) {
				IsWord = true;
				break;
			}
		}
		if (IsWord == false) num++;
	}
	sort(Words, Words + num);
	for (int i = 0; i < num; i++) {
		cout << Words[i] << endl;
	}
	return 0;
}