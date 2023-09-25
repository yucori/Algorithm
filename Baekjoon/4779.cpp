#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int n;

void erase(int x){
    if(x==0){
        cout<<'-';
        return ;
    }
    erase(x-1);
    for(int i=0; i<pow(3, x-1); i++){
        cout<<" ";
    }
    erase(x-1);
}

int main(){
    while (scanf("%d", &n) != EOF){
        erase(n);
        cout<<'\n';
    }
}