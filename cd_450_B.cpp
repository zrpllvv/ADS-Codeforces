//@author: zrpllvv
//link: https://codeforces.com/contest/245/problem/B
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<double> a(n);
  vector<double> aa(n);

  for(int i = 0; i < n; i++){
    cin >> a[i];
    aa[i] = ceil(a[i] / m);
  }

  int int_max = 0;
  for(int i = 1; i < n; i++){
    if(aa[i] >= aa[int_max]) int_max = i;
  }
  cout << int_max + 1;
  return 0;
}
