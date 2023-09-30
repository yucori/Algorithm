#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[255];
    int cnt=0, e=0, sum=0;
    while(1){
        scanf("%[^\n]s", a);
        getchar();

        if(a[0]=='#') {return 0;}
        for(int i=65; i<91; i++){
            for(int j=0; j<strlen(a); j++){
                if((a[j]==i)||(a[j]==i+32)){
                    if(e==0){
                        cnt++;
                        e=1;
                        }
                    }
                }
            e=0;
            sum+=cnt;
            cnt=0;
            }
        cout<<sum<<endl;
        sum=0;
        }
    return 0;
}