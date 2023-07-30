#include<iostream>
using namespace std;
int n;
int arr[100005];
int dp[100005];

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    int num = -1000;
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        if(dp[i-1]+arr[i]<arr[i]){
            dp[i] = arr[i];
        }
        else {
            dp[i] = dp[i-1]+arr[i];
        }
        if(dp[i]>=num) num = dp[i];
    }
    cout<<num;
    return 0;
}