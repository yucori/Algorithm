#include <iostream>
using namespace std;
int arr[10];
int sum = 0;
int ans;

int main(){
    for(int i=0; i<5; i++) cin>>arr[i];
    for(int i=0; i<5; i++){
        arr[i] = arr[i]*arr[i];
        sum += arr[i];
    }
    ans = sum%10;
    cout<< ans;
    return 0;
}