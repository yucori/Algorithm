#include<iostream>
using namespace std;
int a, b;
int main(){
    while(1){
        cin>>a>>b;
        if(cin.eof() == true){
            break;
        }
        cout<<a+b<<'\n';
    }
}