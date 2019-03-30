#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const double Pi = 3.14159265358;
double l, C, n, l1;
void suan(double zuo, double you) {
	double mid = (zuo + you) / 2;
	double ha = sin(mid);
	double r = l1 / 2 / mid;
	double ke = l / 2 / r;
	if (fabs(ha - ke) <= 1e-11) {
		printf("%.3lf", r*(1 - cos(mid)));
		return;
	}
	else if (ha<ke) {
		suan(zuo, mid);
	}
	else {
		suan(mid + 1e-11, you);
	}
}
int main() {
	scanf("%lf%lf%lf", &l, &n, &C);
	l1 = (1 + n * C)*l;
	if (l1 == l) {
		printf("0.000");
		return 0;
	}
	suan(0, Pi / 2);
	return 0;
}