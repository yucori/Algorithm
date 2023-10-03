#include<iostream>
using namespace std;

int main(){
    int n, m;
    int gold[1005];
    int silver[1005];
    int bronze[1005];
    int index;
    int num=0;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>index;
        cin>>gold[index]>>silver[index]>>bronze[index];
        }
    for(int i=1; i<=n; i++){
        if(gold[i]>gold[m]){
            num++;
        }
        else if(gold[i]==gold[m]){
            if(silver[i]>silver[m]){
                num++;
            }
            else if(silver[i]==silver[m]){
                if(bronze[i]>bronze[m]){
                    num++;
                }
            }
        }
    }
    cout<<num+1<<'\n';
}