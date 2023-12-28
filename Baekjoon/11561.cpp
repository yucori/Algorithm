#include<iostream>
#include<algorithm>
#include<math.h>
#define ull unsigned long long
using namespace std;
int t;
ull n;


ull check(ull n){
    ull left = 1;
    ull right = sqrt(n) * 2;
    ull mid;
    ull ans = 0;
    while(left<=right){
        mid = (left+right)/2;
        if(mid*(mid+1) <= 2 * n){
            ans = max(ans,mid);
            left = mid+1;
        }
        else right = mid-1;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;

    while(t--){
        cin>>n;
        cout<<check(n)<<'\n';
    }
}