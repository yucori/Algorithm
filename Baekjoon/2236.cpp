#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int n, k;

void inputArr(pair<int, int>arr[]){
    for(int i=0; i<n; i++){
        int priority =0;
        cin>>priority;
        arr[i] = {priority, i};
    }
    sort(arr, arr+n);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n>>k;
    pair<int, int>arr[n];
    inputArr(arr);
    for(int i=0; i<k; i++){
        if(i>=n) cout<<0<<'\n';
        else cout<<arr[n-(i+1)].second+1<<'\n';
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j].second == i && j >= n-k) cout<<arr[j].second+1<<'\n';
            else if(arr[j].second == i) cout<<0<<'\n';
        }
    }
    return 0;
}