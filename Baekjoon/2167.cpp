#include <iostream>
using namespace std;
int n, m, k;
int i, j, x, y;
int arr[305][305];

int main(){
    cin>>n>>m;
    for(int a=0; a<n; a++){
        for(int b=0; b<m; b++){
            cin>>arr[a][b];
        }
    }
    cin>>k;
    for(int c=0; c<k; c++){
        cin>>i>>j>>x>>y;
        int num=0;
        for(int a=i-1; a<x; a++){
            for(int b=j-1; b<y; b++){
                num = num + arr[a][b];
            }
        }
    cout<<num<<'\n';
    }     
    
}