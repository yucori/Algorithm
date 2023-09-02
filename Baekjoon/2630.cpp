#include <iostream>
using namespace std;
int n;
int wcnt, bcnt;
int arr[133][133];

void check(int x, int y, int len){
    int color = arr[x][y];
    for(int i=x; i<x+len; i++){
        for(int j=y; j<y+len; j++){
            if(color != arr[i][j]){
                check(x, y, len/2);
                check(x+len/2, y, len/2);
                check(x, y+len/2, len/2);
                check(x+len/2, y+len/2, len/2);
                return;
            }
        }
    }
    if(color == 1) bcnt++;
    else wcnt++;
}
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    check(0, 0, n);
    cout<<wcnt<<'\n'<<bcnt<<'\n';
}