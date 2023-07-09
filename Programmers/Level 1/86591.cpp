#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    
    for(int i=0; i<sizes.size(); i++){
        int list0 = sizes[i][0];
        int list1 = sizes[i][1];
        
        if(list0 > list1){
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = list0;
        }
    }
    
    int num1 = sizes[0][0];
    int num2 = sizes[0][1];
    
    for(int i=1; i<sizes.size(); i++){
        int list0 = sizes[i][0];
        int list1 = sizes[i][1];
        
        if(list0 > num1){
            num1 = list0;
        }
        if(list1 > num2){
            num2 = list1;
        }
    }
    
    return num1*num2;
}