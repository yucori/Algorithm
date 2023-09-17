#include <iostream>
using namespace std;
int n, m;
int card[105];
int num=0;

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>card[i];
    }
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(card[i]+card[j]+card[k]<=m && card[i]+card[j]+card[k]>num){
                    num = card[i]+card[j]+card[k];
                }
            }
        }
    }
    cout<<num<<'\n';
         
}