#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int temp = 0;
    int cnt = 1;
    for(int i=0; i<nums.size()-2; i++){
        for(int j=i+1; j<nums.size()-1; j++){
            for(int k=j+1; k<nums.size(); k++){
                temp = nums[i]+nums[j]+nums[k];
                for(int l=2; l<temp; l++){
                    if(temp%l == 0){
                        cnt = 0;
                        break;
                    }else{
                        cnt = 1;
                    }
                }
                answer+=cnt;
            }
        }
    }

    return answer;
}