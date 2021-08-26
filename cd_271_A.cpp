//@author: zrpllvv
//link: https://codeforces.com/contest/271/problem/A
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>

using namespace std;

bool func(int god){
  set<char> unique;
  string s = to_string(god);
  int size = s.size();
  for(int i = 0; i < size; i++){
    unique.insert(s[i]);
  }
  return(unique.size() == s.size());
}

int main(){
  int year;
  cin >> year;
  int i = 1;
  while(true){
    if(func(i+year)){
      cout << i + year;
      break;
    }
    i++;
  }
  return 0;
}
