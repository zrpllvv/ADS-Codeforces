//@author: zrpllvv
//link: https://codeforces.com/contest/1364/problem/C
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100005], b[100005];
	memset(b , -1, sizeof(b));
	vector<int> c;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		b[a[i]] = 0;
	}

	for(int i = 1; i <= n; i++){
		if(b[i] == -1)
			c.push_back(i);
	}

	int l = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] != a[i - 1])
			cout << a[i - 1] << " ";
		else{
			cout << c[l++] << " ";
		}
	}
	cout << "\n";
}
