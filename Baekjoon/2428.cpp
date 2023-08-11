#include<iostream>
#include<algorithm>
using namespace std;
int n;
int arr[100005];


int check(int left, int right, int key){
    int num = key;
    left = key+1;
    int mid;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]*0.9<=arr[key]) {
           num = mid;
           left = mid+1;
           }
        else right = mid-1;
       }
    return num;
}


int main(){ 
    ios_base::sync_with_stdio(0);cin.tie(0); 
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+=check(i, n-1, i)-i;
    }
    printf("%lld\n", sum);
    return 0;
}