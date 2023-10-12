#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a%b==0) return b;
    else return gcd(b, a%b);
    }

int main(){
    int t, n;
    long long a[105] = {};
    long long sum[105] = {};
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++){
            cin>>a[j];
            }
        for(int k=0; k<n; k++){
            for (int p= k+1; p<n; p++){
                sum[i] += gcd(a[k], a[p]);
                }
            }
        }
    for (int i=0; i<t; i++){
        cout<<sum[i]<<endl;
        }
    }
    