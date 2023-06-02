#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp;
    vector<string>wordList;
    string word;
    for(int i=0; i<s.size(); i++){
        word = s[i];
        if(word!=" "){
            temp.append(word);
            if(i == s.size()-1){
                wordList.push_back(temp);
            }
        }
        else{
            wordList.push_back(temp);
            wordList.push_back(" ");
            temp="";
        }
    }
    for(int i=0; i<wordList.size(); i++){
        for(int j=0; j<wordList[i].size(); j++){
            if(j%2==1){
                answer+=tolower(wordList[i][j]);
            }else{
                answer+=toupper(wordList[i][j]);
            }
        }
    }
    
    return answer;
}