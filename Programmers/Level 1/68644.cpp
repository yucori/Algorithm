#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
  int ansLen = answer.size();
    
  sort(numbers.begin(), numbers.end());
    
  for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            int num = numbers[i]+numbers[j];
            if(i == 0 && j == 1){
              answer.push_back(num);
              ansLen++;
            }
            for(int k=0; k<ansLen; k++){
                if(num == answer[k]){
                    break;
                }
                else if(k == ansLen-1 && num != answer[k]){
                    answer.push_back(num);
                    ansLen+=1;
                }
            }
        }
        
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}