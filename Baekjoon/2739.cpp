#include<iostream>
using namespace std;
int n;

int main(){
    cin>>n;
    for(int i=1; i<=9; i++){
        printf("%d * %d = %d", n, i, i*n);
        cout<<'\n';
    }
    return 0;
}