//@author: zrpllvv
//link: https://codeforces.com/contest/1558/problem/C
#include <bits/stdc++.h>
using namespace std;

#define N 5005
int T, n, a[N];

void rev(int x){
	printf("%d ", x);
	for(int i = 1; i <= x/2; i++) swap(a[i], a[x - i + 1]);
}

void slv1(int r){
	if(r == 1) return; int ps1 = 0, ps2 = 0;
	for(int i = 1; i <= r; i++) if(a[i] == r) ps1 = i; rev(ps1);
	for(int i = 1; i <= r; i++) if(a[i] == r - 1) ps2 = i; rev(ps2 - 1);
	rev(ps2 + 1); rev(3); rev(r); slv1(r - 2);
}

void slv(){
	scanf("%d",&n);
	for(int i = 1; i <= n; i++) scanf("%d",&a[i]);
	for(int i = 1; i <= n; i++)
		if(a[i] + i&1) { puts("-1"); return;}
	printf("%d\n",n/2*5); slv1(n); puts("");
}

int main(){
	scanf("%d",&T);
	while(T--) slv(); return 0;
}
