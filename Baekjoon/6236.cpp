#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int least=0;
int arr[100005];
int sum = 0;

int check(int left, int right){
    int mid;
    while(left<=right){
        mid = (left+right)/2;
        int cnt = 1;
        int money = mid;
        for(int i=0; i<n; i++){
            money -= arr[i];
            if(money<=0){
                money = mid-arr[i];
                cnt++;
            }
        }
        if(cnt>m) left = mid+1;
        else right = mid-1; 
        
    }
    return mid;
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        least = max(least, arr[i]);
        sum += arr[i];
    }
    cout<<check(least, sum);
    return 0;
}