#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    sort(strings.begin(), strings.end());
    
    vector<pair<string, int>> temp;
    string temps;
    for(int i=0; i<strings.size(); i++){
        temps = strings[i][n];
        temp.push_back({temps, i});
    }
    sort(temp.begin(), temp.end());
    
    for(int i=0; i<temp.size(); i++){
        answer.push_back(strings[temp[i].second]);
    }
    
    return answer;
}