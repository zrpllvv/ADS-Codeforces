//@author: zrpllvv
//link: https://codeforces.com/contest/266/problem/B
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main(){
  int n, t;
  cin >> n >> t;
  vector<char> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  int count = 0;

  for(int j = 0; j < t; j++){
    for(int i = 1; i < n; i++){
      if(a[i] > a[i - 1]){
        int temp = a[i - 1];
        a[i - 1] = a[i];
        a[i] = temp;
        i++;
      }
    }
  }

  for(int i = 0; i < n; i++){
    cout << a[i];
  }
  return 0;
}
