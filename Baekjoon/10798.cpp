#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string a[10];
int main(){
    for(int i=0; i<5; i++) cin>>a[i];
    
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(i<a[j].size()){
                cout<<a[j][i];
            }
        }
    }
    cout<<'\n';
    return 0;
}