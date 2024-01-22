#include<iostream>
using namespace std;

int main(){
  int n;
  cin>> n;
  int first = n/5;
  int rest = n%5;

  if(rest%2 != 0){
    if(first > 0){
      while(rest%2 != 0){
        first--;
        rest += 5;
      }
    }else{
      cout<< -1 <<'\n';
      return 0;
    }
  }

  int ans = first + (rest/2);

  cout<<ans<<'\n';
  return 0;
}