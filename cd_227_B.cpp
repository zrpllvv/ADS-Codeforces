//@author: zrpllvv
//link: https://codeforces.com/contest/227/problem/B
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
  const int big_n = 1e5 + 10;
  int n, m;
  long long count1 = 0, count2 = 0;
  cin >> n;
  vector<int> a(big_n);
  for(int i = 0; i < n; i++){
    int num;
    cin >> num;
    a[num] = i + 1;
  }

  cin >> m;

  while(m--){
    int x;
    cin >> x;
    count1 += a[x];
    count2 += n - a[x] + 1;
  }

  cout << count1 << " " << count2;
  return 0;
}
