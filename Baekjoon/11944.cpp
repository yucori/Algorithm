#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, m;
    string w = "";
    scanf("%d %d", &n, &m);
    for (int i=0; i<n; i++){
    w += to_string(n);
    }
    if (w.length()>m){
        cout<<w.substr(0,m);
    }
    else{
        cout<<w;
    }
}