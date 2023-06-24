#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a[15] = {1, 2, 3, 4, 5};
    int b[15] = {2, 1, 2, 3, 2, 4, 2, 5};
    int c[15] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int al[10005];
    int bl[10005];
    int cl[10005];
    int sa = 0;
    int sb = 0;
    int sc = 0;
    
    for(int i=0; i<answers.size(); i++){
        al[i] = a[i%5];
        bl[i] = b[i%8];
        cl[i] = c[i%10];
    }
    
    for(int i=0; i<answers.size(); i++){
        if(al[i] == answers[i]){
            sa++;
        }
        if(bl[i] == answers[i]){
            sb++;
        }
        if(cl[i] == answers[i]){
            sc++;
        }
    }
    
    vector<pair<int, int>> list = {{sa, 1}, {sb, 2}, {sc, 3}};
    sort(list.rbegin(), list.rend());
    
    answer.push_back(list[0].second);
    if(list[0].first == list[1].first){
        answer.push_back(list[1].second);
        if(list[1].first == list[2].first){
        answer.push_back(list[2].second);
        }
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}