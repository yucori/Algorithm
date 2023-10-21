#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, p;
    pair<int, int>planet[100005];
    vector<pair<int, int>>f;
    cin>>n>>p;
    for(int i=0; i<n; i++){
        int tmp1, tmp2;
        cin>>tmp1>>tmp2;
        planet[i] = {tmp1, tmp2};
        if(i == p-1)continue;
        f.push_back({planet[i].second, tmp1-tmp2});
    }
    int cnt =1;
    int fuel = planet[p-1].first;
    sort(f.begin(), f.end());
    for(int i=0; i<n-1; i++){
        if(f[i].second<0)continue;
        if(fuel<f[i].first)continue;
        fuel+=f[i].second;
        cnt++;
    }
    cout<<fuel<<'\n';
    cout<<cnt;
    return 0;
}