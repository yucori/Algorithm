#include<iostream>
using namespace std;
int n;
long long arr[1500050];


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>n;
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<=n; i++){
        arr[i] = arr[i-2]+arr[i-1];
    }
    cout<<arr[n];
    return 0;
}