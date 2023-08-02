#include<iostream>
using namespace std;
int main(){
    int n, r =0;
    int temp, cnt =0;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>temp;
        for(int j=1; j<=temp; j++){
            if(temp%j==0)
                cnt++;
        }
        if(cnt ==2)
            r++;
        cnt=0;
    }
    cout<<r<<'\n';
}