#include<iostream>
#include<algorithm>
using namespace std;
unsigned int n, m;
unsigned int arr[1000005];
int ans;

unsigned int check(unsigned int right){
    unsigned int left=0;
    
    while(left<=right){
        unsigned int mid = (left+right)/2;
        long long sum =0;
        for(int i=0; i<n; i++){
            if(mid<arr[i]) sum+= arr[i]-mid;
        }
        if(sum>=m){
            if(ans<mid){
                ans = mid;
            }
            left = mid+1;
        }
        else right = mid-1;
        
    }
    return ans;
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cout<< check(arr[n-1]);
    return 0;
}