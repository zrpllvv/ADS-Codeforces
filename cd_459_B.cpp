//@author: zrpllvv
//link: https://codeforces.com/contest/459/problem/B
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>

using namespace std;

typedef long long ll;
#pragma GCC optimize("unroll-loops")

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  ll n;
  cin >> n;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ll omega = abs(a[n - 1] - a[0]);
  ll count_max = 1;
  ll count_min = 1;
  ll omega_count = 0;

  ll i = 1;
  while(a[i] == a[0]){
    count_min++;
    i++;
  }
  i = n - 2;
  while(a[i] == a[n - 1]){
    count_max++;
    i--;
  }

  if(a[0] == a[n - 1]) omega_count = n * (n - 1) / 2;
  else omega_count = count_max * count_min;

  cout << omega << " " << omega_count;
  return 0;
}
