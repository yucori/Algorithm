#include <iostream>
using namespace std;

int max(int a, int b){
    int c = a%b;
    while (c != 0){
        a =b;
        b =c;
        c =a%b;
    }
    return b;
}
int min(int a, int b){
    return (a*b)/max(a,b);
}
int main(){
    int n1, n2;
    cin>>n1>>n2;
    cout<<max(n1, n2)<<endl;
    cout<<min(n1,n2)<<endl;
}