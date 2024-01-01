#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    int a[1000005];
    int b[1000005];
    int c[2000010];
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else c[k++]=b[j++];
    }
    while(i<n) c[k++]=a[i++];
    while(j<m) c[k++]=b[j++];
    for(int p=0; p<n+m; p++){
        cout<<c[p]<<" ";
    }
}