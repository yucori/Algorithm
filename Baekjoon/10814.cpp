#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
int main(){
  int n;
  int a;
  string b;
  vector<tuple<int, int, string>> list;
  cin>>n;

  for(int i=0; i<n; i++){
    cin>>a>>b;
    list.push_back(make_tuple(a, i, b));
  }

  sort(list.begin(), list.end());

  for(int i=0; i<n; i++){
    cout<<get<0>(list[i])<<' '<<get<2>(list[i])<<'\n';
  }
  return 0;
}