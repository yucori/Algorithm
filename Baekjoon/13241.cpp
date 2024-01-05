#include<iostream>
using namespace std;

long long gcd(long long a, long long b){
    if(a<b){return gcd(a, b%a);}
    if(b==0){return a;}
    return gcd(b, a%b);
}
int main(){
    long long a, b, gcd1;
    cin>>a>>b;
    gcd1 = gcd(a,b);
    cout<<a*b/gcd1<<endl;
}