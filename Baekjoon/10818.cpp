#include <iostream>
using namespace std;
int main(){
    int cnt;
    int min = 1000000;
    int max = -1000000;
    
    cin>>cnt;
    int s[cnt];
    for(int i=0; i<cnt; i++){
        cin>>s[i];
        if(max<s[i]) max=s[i];
        if(min>s[i]) min=s[i];
    }
    cout<< min<<' '<<max<<endl;
    
    return 0;
}