#include <string>
#include <map>
#include <vector>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<int, string> m1;
    map<string, int> m2;
    for(int i=0;i<players.size();i++)
    {
        m1[i] = players[i];
        m2[players[i]] = i;
    }
    for(int i=0; i<callings.size(); i++)
    {
        int cal_idx = m2[callings[i]];
        string change = m1[cal_idx - 1];
        m1[cal_idx - 1] = callings[i];
        m1[cal_idx] = change;
        m2[callings[i]] -= 1;
        m2[change] += 1;
    }
    for(auto c : m1) answer.push_back(c.second);
    return answer;

}