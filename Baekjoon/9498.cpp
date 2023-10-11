#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    if(90<=s) cout<<"A";
    else if(80<=s && s<=89) cout<<"B";
    else if(70<=s && s<=79) cout<<"C";
    else if(60<=s && s<=69) cout<<"D";
    else cout<<"F";
    return 0;
}
