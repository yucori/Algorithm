#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> success;
    vector<pair<double, double>> ratio;
    
    for(int i=0; i<N; i++){
        success.push_back(make_pair(0,i+1));
        ratio.push_back(make_pair(0,0));
    }
    
    for(int i=0; i<stages.size(); i++){
        for(int j=0 ; j<stages[i]; j++){
            
            if(j == stages[i]-1 ){
                ratio[j].first += 1;
            }
            else{
                ratio[j].first += 1;
                ratio[j].second += 1;
            }
        }
    }
    
    for(int i=0; i<success.size(); i++){
        success[i].first = ((ratio[i].second/ratio[i].first));
    }
    
    sort(success.begin(), success.end());
    
    for(int i=0; i<success.size(); i++){
        answer.push_back(success[i].second);
    }
    
    return answer;
}