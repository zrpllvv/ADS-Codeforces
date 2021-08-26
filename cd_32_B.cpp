//@author: zrpllvv
//link: https://codeforces.com/contest/32/problem/B
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main(){
  // Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--».
  string a;
  string answer = "";
  cin >> a;
  int string_size = a.size();
  for(int i = 0; i < string_size; i++){
    if(a[i] == '-'){
      if(a[i + 1] == '.'){
        answer += '1';
        i++;
      } else if(a[i + 1] == '-'){
        answer += '2';
        i++;
      }
    } else if(a[i] == '.')answer += '0';
  }
  cout << answer;
  return 0;
}
