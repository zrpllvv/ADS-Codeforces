//@author: zrpllvv
//link: https://codeforces.com/contest/69/problem/B
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i].first >> a[i].second;
  }
 
  int count = 0;

  bool x1, x2, y1, y2;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i != j){
        if(a[i].first == a[j].first){
          if(a[i].second > a[j].second){
            x1 = false;
          }
          if(a[i].second < a[j].second){
            x2 = false;
          }
        } else if(a[i].second == a[j].second){
          if(a[i].first > a[j].first){
            y1 = false;
          }
          if(a[i].first < a[j].first){
            y2 = false;
          }
        }
      }
    }
    if(x1 + x2 + y1 + y2 == 0){
      count++;
    }
    x1 = true; x2 = true; y1 = true; y2 = true;
  }

  cout << count;
  return 0;
}
