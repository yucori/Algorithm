#include<iostream>
using namespace std;

int main (void){
    int n = 0;
    char line[8][8];
    
    for (int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>line[i][j];
            if (line[i][j] == 'F'){
                if ((i+j)%2 == 0)
                    n++;
           }
        }
    }
    cout<<n<<endl;
    return 0;
}
