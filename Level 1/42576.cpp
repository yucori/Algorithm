#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int i=0; i<completion.size(); i++){
        if(participant[i] != completion[i]){
            return participant[i];
        }
    }
    return participant[participant.size()-1];
    
    
    /*
    for(int i=participant.size()-1; i>=0; i--){
        for(int j=0; j<completion.size(); j++){
            if(participant[i] == completion[j]){
                participant.erase(participant.begin() + i);
                completion.erase(completion.begin() + j);
                continue;
            }
        }
    }
    
    return participant[0];
    */
}