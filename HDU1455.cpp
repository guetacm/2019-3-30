#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<map>
#include<set>
#define eps 1e-6
#define LL long long
using namespace std;

const int maxn = 70;
const int INF = 0x3f3f3f3f;
int n, sum, target, aim;
int stick[maxn], vis[maxn];
bool cmp(int a, int b) {
	return a > b;
}

void init() {
	sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> stick[i]; sum += stick[i];
	}
	sort(stick, stick+n, cmp);
}

bool dfs(int cnt, int len, int pos) {
	if(cnt == target) return true;
	if(len == aim) return dfs(cnt+1, 0, 0);
	for(int i = pos; i < n; i++) {
		if(!vis[i] && len+stick[i] <= aim) {
			vis[i] = 1;
			if(dfs(cnt, len+stick[i], i+1)) return true;
			vis[i] = 0;
			if(len == 0) return false;
			while(i+1 < n && stick[i+1] == stick[i]) i++;
		}
	}
	return false;
}





int main() {

	while(scanf("%d", &n) == 1 && n) {
		init();
		int ans = 0;
	for(int i = 1; i <= sum; i++) if(sum % i == 0) {
		memset(vis, 0, sizeof(vis));
		aim = i; target = sum / aim;
		if(dfs(0, 0, 0)) {
			ans = aim; break;
		}
	}
	cout << ans << endl;
	}
	return 0;
}
