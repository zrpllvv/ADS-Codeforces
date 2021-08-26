//@author: zrpllvv
//link: https://codeforces.com/contest/272/problem/A
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;
  int sum = 0;
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    sum += x;
  }
  int count = 0;
  for(int i = 1; i <=5 ; i++){
    if((sum + i - 1) % (n + 1) != 0) count++;
  }
  cout << count;
  return 0;
}
