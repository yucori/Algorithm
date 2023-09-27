#include<iostream>
using namespace std;

int main(){
    int w[10];
    int k[10];
    for(int i=0; i<10; i++) 
        cin>>w[i];
    for(int j=0; j<10; j++) 
        cin>>k[j];
    
    for(int i=0; i<9; i++){
        for(int j=i+1; j<10; j++){
            if(w[i]<w[j]){
                int tmp = w[i];
                w[i] = w[j];
                w[j] = tmp;
            }
            if(k[i]<k[j]){
                int tmp = k[i];
                k[i] = k[j];
                k[j] = tmp;
            }
        }
    }
    cout<<w[0]+w[1]+w[2]<< " " <<k[0]+k[1]+k[2]<<endl;
    return 0;
}