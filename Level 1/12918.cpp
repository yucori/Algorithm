#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    int cnt=0;
    if(s.size() == 4 || s.size() == 6){
        for(int i=0; i<s.length(); i++){
            if(s[i] =='0' || s[i] =='1' || s[i] =='2' || s[i] == '3'|| s[i] == '4'|| s[i] == '5'|| s[i] == '6'|| s[i] == '7'|| s[i] == '8'|| s[i] == '9'){
                cnt++;
            }
        }
        if(cnt == s.length()){
            answer = true;
        }
    }
    return answer;
}