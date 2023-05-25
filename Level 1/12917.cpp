#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string>temp;
    string word;
    for(int i=0; i<s.length(); i++){
        word = s[i];
        temp.push_back(word);
    }
    sort(temp.rbegin(), temp.rend());
    for(int i=0; i<temp.size(); i++){
        answer.append(temp[i]);
    }
    return answer;
}