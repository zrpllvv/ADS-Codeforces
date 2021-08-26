//@author: zrpllvv
//link: https://codeforces.com/contest/275/problem/A
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main(){
  int a[5][5];
  int answer[5][5];
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      a[i][j] = 0;
      answer[i][j] = 0;
    }
  }

  for(int i = 1; i < 4; i++){
    for(int j = 1; j < 4; j++){
      int x;
      cin >> x;
      for(int t = i - 1; t <= i + 1; t++){
        for(int p = j - 1; p <= j + 1; p++){
          if(!(p != j && t != i))answer[t][p] += x;
        }
      }
    }
  }

  for(int i = 1; i < 4; i++){
    for(int j = 1; j < 4; j++){
      if(answer[i][j] % 2 == 0) cout << 1;
      else cout << 0;
    }
    cout << "\n";
  }
  return 0;
