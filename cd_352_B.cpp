//@author: zrpllvv
//link: https://codeforces.com/contest/352/problem/B
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

#pragma GCC optimize("unroll-loops")

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	set<int> sett;

	for(int i = 0; i < n; i++){
		int y;
		cin >> y;
		a[i] = y;
		sett.insert(y);
	}

	vector<int> answ1;
	vector<int> answ2;


	for (auto it = sett.begin(); it != sett.end(); it++){
		int x = *it;

		answ1.push_back(x);

		int first = 0; int second = 0;
		bool boolean = true;
		for(int j = 0; j < n; j++){
			if(a[j] == x && boolean){
				boolean = false;
				first = j;
				second = j;
			}
		}

		boolean = true;
		for(int j = first + 1; j < n; j++){
			if(a[j] == x && boolean){
				boolean = false;
				second = j;
			}
		}

		answ2.push_back(second - first);
	}

	int answer_size = answ1.size();

	cout << answer_size << "\n";

	for(int i = 0; i < answer_size; i++){
		cout << answ1[i] << " "	<< answ2[i];
		cout << "\n";
	}
}
