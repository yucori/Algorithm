#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
int arr[100005];

void check(int left, int right, int key){
    while(left<=right){
        int mid;
        mid = (left+right)/2;
        if(key == arr[mid]){
            cout<<1<<'\n';
            return;
        }
        else if(key>arr[mid]) left = mid+1;
        else right = mid-1;
    }
    cout<<0<<'\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); 
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    cin>>m;
    int temp;
    sort(arr, arr+n);
    for(int i=0; i<m; i++) {
        cin>>temp;
        check(0, n-1, temp);
    }
    return 0;
}