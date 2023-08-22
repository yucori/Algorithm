#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int arr[10005];

int money(int left, int right){
    while(left<=right){
        int sum = 0;
        int mid = (left+right)/2;
        for(int i=0; i<n; i++){
            if(arr[i]<mid){
                sum += arr[i];
            }
            else sum += mid;
        }
        if(sum<=m){
            left = mid+1;
        }
        else right  = mid-1;
    }
    return right;
}


int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>m;
    sort(arr, arr+n);
    printf("%d", money(0, arr[n-1]));
    return 0;
}