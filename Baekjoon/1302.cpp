#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string, int>m;
int n, cnt;
int main(){
    cin>>n;
    while(n--){
        string name;
        cin>>name;
        m[name]++;
    }
    for(auto p:m)cnt = max(cnt, p.second);
    for(auto p:m){
        if(p.second == cnt){
            cout<<p.first;
            return 0;
        }
    }
}