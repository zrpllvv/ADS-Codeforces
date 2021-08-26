//@author: zrpllvv
//link: https://codeforces.com/contest/34/problem/A
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>

using namespace std;

#pragma GCC optimize("unroll-loops")

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  int index1 = 0, index2 = 1;
  int min = abs(a[0] - a[1]);

  for(int i = 1; i < n - 1; i++){
    if(abs(a[i] - a[i + 1]) < min){
      min = abs(a[i] - a[i + 1]);
      index1 = i;
      index2 = i + 1;
    }
  }

  int size = a.size() - 1;
  if(abs(a[0] - a[size]) < min){
    cout << 1 << " " << size + 1;
  } else {
    cout << index1 + 1 << " " << index2 + 1;
  }
  return 0;
}
